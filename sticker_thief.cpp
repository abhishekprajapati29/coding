ll FindMaxSum(ll arr[], ll n)
{
    ll incl_curr = arr[0]; // sum upto curr element including it
  ll excl_curr = 0;      // sum upto curr element excluding it
  ll incl_prev = incl_curr; // sum upto prev element including it
  ll excl_prev = excl_curr; // sum upto prev element excluding it
  
  for (int i = 1; i < n; i++)
  {
     excl_curr = max(incl_prev, excl_prev); 
     incl_curr = excl_prev + arr[i]; // sum of incl_curr does not include adjacent element
                                     // so it is sum upto prev element excluding it and curr element
     excl_prev = excl_curr;  // for next iteration
     incl_prev = incl_curr;  // for next iteration
  }
   return max(excl_curr, incl_curr);
}
