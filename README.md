<!-- Heading -->
<p align="center" style="margin-bottom: 0">
  <img src="https://user-images.githubusercontent.com/1940433/202434180-7f8a2a5d-5c65-44ac-9d89-04996f000e42.png"/>
  <h1 align="center" style="margin-top: 0">
    Inspection Service
  </h1>
</p>

<!-- Table of Contents -->

# Table of Contents

- [About the Project](#about-the-project)

* [Tech Stack](#tech-stack)

* [Environment Variables](#environment-variables)

- [Getting Started](#getting-started)

* [Installation](#installation)

* [Run Locally](#run-locally)

* [Deployment](#deployment)

- [Queries](#queries)

- [Mutations](#mutations)

- [FAQ](#faq)


<!-- About the Project -->

## About the Project

The Inspection Service handles PAVE, AIM, Seller Disclosure and other types of 3rd party inspections.

<!-- TechStack -->

### Tech Stack

<p align="center">
    <a  href="https://www.typescriptlang.org/">
      <img src='https://img.shields.io/badge/typescript-%23007ACC.svg?style=for-the-badge&logo=typescript&logoColor=white' alt='Typescript'/>
    </a>
    <a  href="https://www.apollographql.com/">
      <img src='https://img.shields.io/badge/-ApolloGraphQL-311C87?style=for-the-badge&logo=apollo-graphql' alt='Apollo-GraphQL'/>
    </a>
    <a  href="https://expressjs.com/">
      <img src='https://img.shields.io/badge/express.js-%23404d59.svg?style=for-the-badge&logo=express&logoColor=%2361DAFB' alt='Express.js'/>
    </a>
    <a  href="https://github.com/">
      <img src='https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white' alt='GitHub'/>
    </a>
    <a  href="https://sequelize.org/">
      <img src='https://img.shields.io/badge/Sequelize-52B0E7?style=for-the-badge&logo=Sequelize&logoColor=white' alt='Sequelize'/>
    </a>
    <a  href="https://circleci.com/">
      <img src='https://img.shields.io/badge/circle%20ci-%23161616.svg?style=for-the-badge&logo=circleci&logoColor=white' alt='CircleCI'/>
    </a>
</p>

<!-- Env Variables -->

### Environment Variables

To run this project, you will need to add the following environment variables:

[./.env](./.env.example)

```
DB_USER=test
DB_PASSWORD=test
DB_NAME=inspection
DB_NAME_TEST=inspectionTest
DB_HOST=127.0.0.1
DB_PORT=3306
DB_DIALECT=mysql
AWS_REGION=us-west-2
AWS_ACCESS_KEY_ID=test_access_key;
AWS_ACCESS_KEY_SECRET=test_access_secret;
SNS_PLATFORM_BUS=platform bus arn;
GRAPHQL_API_TOKEN=token
GRAPHQL_API_URI=graphql_url
ACCOUNTS_ACCESS_TOKEN=test_access_token
AIM_API_USER_NAME=aiminspectionuser
AIM_API_PASSWORD=a!m4tr@dex2021!
DEPLOYMENT=development
USERNAME=pave username
API_KEY=pave api key
API_SECRET=pave secret
```
<!-- Getting Started -->

## Getting Started

<!-- Installation -->

### Installation

Install project dependencies

```bash
cd inspection
npm i
```

<!-- Run Locally -->

### Run Locally

Clone the project

```bash
git clone https://github.com/trade-export/inspection.git

```

Go to the project directory

```bash
cd inspection

```

Install dependencies

```bash
npm i

```

Build and Start the server 

```bash
npm run build
npm run start
```

<!-- Deployment -->

### Deployment

#### Release candidate creation

Create a new branch from develop with the following format

```bash
git checkout develop
git pull --rebase develop
git branch release/vX.X.X # use the package.json version
```

After that bump the develop package.json version for the next development iteration.

#### Deploy to prod

Merge the latest release candidate to the `main` branch and the deployment will be done automatically

## Queries

**fetchInspectionReports** : fetch all the inspection reports.
```graphql
 fetchInspectionReports: [InspectionReport]
```

```graphql
  type InspectionReport {
    id: ID!
    productId: String!
    vin: String!
    provider: String!
    status: String!
  }
```

**getInspection** : fetch a inspection report using vin , (provider, status) is optional.
```graphql
 getInspection(vin: String!, provider: String, status: String): [InspectionReport]
```

```graphql
  type InspectionReport {
    id: ID!
    productId: String!
    vin: String!
    provider: String!
    status: String!
  }
```

**fetchPaveInprogressReportForUser** : fetch pave report whose status is Inprogress.
```graphql
 fetchPaveInprogressReportForUser: [PaveInprogressReportForUser]
```

```graphql
  type PaveInprogressReportForUser {
    sessionId: String!
    vin: String!
  }
```

**aimReport** : fetch all the AimInspection report.
```graphql
 aimReport(listing_id: String, garage_id: String): AimInspection
```

```graphql
  type AimInspection {
    id: ID!
    created_at: String
    updated_at: String
    deleted_at: String
    marketplace_id: String
    marketplace_desc: String
    aim_posting_id: String
    pdf_url: String
    web_url: String
    pdf_expiration_date: String
    customer: String
    inspection_type: String
    listing_start_date: String
    listing_end_date: String
    inspection_request_date: String
    inspection_request_source: String
    inspection_date: String
    mileage: String
    inspection_notes: String
    order_number: String
    stock_number: String
    currency: String
    damage_count: String
    damage_total: String
    smoker_car: String
    odometer_tampered: String
    roof_type: String
    odometer_type: String
    odometer_digits: String
    odometer_operable: String
    emissions: String
    driveable: String
    classification_id: String
    previous_damage_amount: String
    estimated_arrival_date: String
    prior_paint: String
    grade: String
    grade_short_desc: String
    grade_long_desc: String
    auction_location: String
    auction_type: String
    event_sale_name: String
    event_sale_type: String
    prices: JSON
    vehicle: JSON
    location: JSON
    tires: JSON
    pictures: JSON
    accessories: JSON
    key_groups: JSON
    checklist: JSON
    damages: JSON
    naaa_auto_grade: Float
    market_place_fields: JSON
    vin: String
  }
```

**fetchPaveSession** : fetch a pave session by passing the sessionId as input.
```graphql
 fetchPaveSession(sessionId: String!): FetchPaveSession
```

```graphql
  type FetchPaveSession {
    sessionId: String
    theme: String
    active: Boolean
    status: String
    redirectUrl: String
    inspectStartedAt: String
    inspectEndedAt: String
    createdAt: String
    updatedAt: String
    language: String
    options: JSON
    source: JSON
    vehicle: JSON
  }
```

**fetchSellerDisclosure** : fetch seller disclosure by passing the id as input.
```graphql
 fetchSellerDisclosure(id: ID!): SellerDisclosure
```

```graphql
  type optionsDataType {
    type: String
    value: String
  }
  
  type sellerDisclosureStructure {
    section: String
    severity: String
    options: [optionsDataType]
    repairable: Boolean
    description: String
    imageUrl: String
  }
  
  type vehicleDisclosureStructure {
    section: String
    severity: String
    options: [optionsDataType]
    value: String
    date: String
    repairable: Boolean
    description: String
    imageUrl: String
  }
  
  type vehicleData {
    odometer: [vehicleDisclosureStructure]
    registration: [vehicleDisclosureStructure]
    history: [vehicleDisclosureStructure]
  }
  
  type paintData {
    original: Boolean
    condition: [sellerDisclosureStructure]
  }
  
  type exteriorDamageItems {
    condition: [sellerDisclosureStructure]
  }
  
  type interiorDamageItems {
    condition: [sellerDisclosureStructure]
    odor: String
    manuals: String
  }
  
  type SellerDisclosure {
    id: ID!
    externalId: String
    paint: paintData
    exterior: exteriorDamageItems
    interior: interiorDamageItems
    vehicle: vehicleData
    structural: String
    mechanical: String
  }
```

## Mutations

**createInspectionReport** : create an inspection report
```graphql
  createInspectionReport(inspectionReport: CreateInspectionReportInput): InspectionReport
```

```graphql
  input CreateInspectionReportInput {
    productId: String!
    vin: String!
    provider: String!
    status: String!
    sessionId: String!
    originalCrUrl: String
    retrievedCrUrl: String
  }

  type InspectionReport {
    id: ID!
    productId: String!
    vin: String!
    provider: String!
    status: String!
  }
```

**updateInspectionReport** : update an inspection report
```graphql
  updateInspectionReport(id: ID, inspectionReport: UpdateInspectionReportInput): InspectionReport
```

```graphql
  input UpdateInspectionReportInput {
    status: String
    originalCrUrl: String
    retrievedCrUrl: String
  }

  type InspectionReport {
    id: ID!
    productId: String!
    vin: String!
    provider: String!
    status: String!
  }
```

**createPaveSession** : creates a pave session
```graphql
  createPaveSession(paveBody: CreatePaveSessionInput): PaveReport
```

```graphql
  input CreatePaveSessionInput {
    vin: String!
    to: String!
    toName: String!
  }

  type PaveReport {
    id: ID!
    sessionId: String!
    vin: String!
    theme: String
    active: Boolean
    status: String
    redirectUrl: String
    inspectStartedAt: String
    inspectEndedAt: String
    language: String
    clientId: String
    sms: JSON
  }
```

**updatePaveStatus** : It's a webhook which is used to fetch all the event and if any event status is complete the it update the pave status to *Complete*.
```graphql
  updatePaveStatus: PaveCallbacks
```

```graphql
  type PaveCallbacks {
    api_key: String!
    data: [JSON]
  }
```

**createSellerDisclosure** : creates a seller disclosure 
```graphql
  createSellerDisclosure(disclosureData: CreateSellerDisclosureInput): SellerDisclosure
```

```graphql
  input optionsDataInput {
    type: String
    value: String
  }

  input sellerDisclosureStructureInput {
    section: String
    severity: String
    options: [optionsDataInput]
    repairable: Boolean
    description: String
    imageUrl: String
  }

  input vehicleDisclosureStructureInput {
    section: String
    severity: String
    options: [optionsDataInput]
    value: String
    date: String
    repairable: Boolean
    description: String
    imageUrl: String
  }

  input vehicleDataInput {
    odometer: [vehicleDisclosureStructureInput]
    registration: [vehicleDisclosureStructureInput]
    history: [vehicleDisclosureStructureInput]
  }

  input paintDataInput {
    original: Boolean
    condition: [sellerDisclosureStructureInput]
  }

  input exteriorDamageItemsInput {
    condition: [sellerDisclosureStructureInput]
  }

  input interiorDamageItemsInput {
    condition: [sellerDisclosureStructureInput]
    odor: String
    manuals: String
  }
  input CreateSellerDisclosureInput {
    externalId: String!
    paint: paintDataInput
    exterior: exteriorDamageItemsInput
    interior: interiorDamageItemsInput
    vehicle: vehicleDataInput
    structural: String
    mechanical: String
  }


  type optionsDataType {
    type: String
    value: String
  }
  
  type sellerDisclosureStructure {
    section: String
    severity: String
    options: [optionsDataType]
    repairable: Boolean
    description: String
    imageUrl: String
  }
  
  type vehicleDisclosureStructure {
    section: String
    severity: String
    options: [optionsDataType]
    value: String
    date: String
    repairable: Boolean
    description: String
    imageUrl: String
  }
  
  type vehicleData {
    odometer: [vehicleDisclosureStructure]
    registration: [vehicleDisclosureStructure]
    history: [vehicleDisclosureStructure]
  }
  
  type paintData {
    original: Boolean
    condition: [sellerDisclosureStructure]
  }
  
  type exteriorDamageItems {
    condition: [sellerDisclosureStructure]
  }
  
  type interiorDamageItems {
    condition: [sellerDisclosureStructure]
    odor: String
    manuals: String
  }
  
  type SellerDisclosure {
    id: ID!
    externalId: String
    paint: paintData
    exterior: exteriorDamageItems
    interior: interiorDamageItems
    vehicle: vehicleData
    structural: String
    mechanical: String
  }
```

**updateSellerDisclosure** : update a seller disclosure
```graphql
  updateSellerDisclosure(id: ID!, disclosureData: UpdateSellerDisclosureInput): SellerDisclosure
```

```graphql
  input optionsDataInput {
    type: String
    value: String
  }

  input sellerDisclosureStructureInput {
    section: String
    severity: String
    options: [optionsDataInput]
    repairable: Boolean
    description: String
    imageUrl: String
  }

  input vehicleDisclosureStructureInput {
    section: String
    severity: String
    options: [optionsDataInput]
    value: String
    date: String
    repairable: Boolean
    description: String
    imageUrl: String
  }

  input vehicleDataInput {
    odometer: [vehicleDisclosureStructureInput]
    registration: [vehicleDisclosureStructureInput]
    history: [vehicleDisclosureStructureInput]
  }

  input paintDataInput {
    original: Boolean
    condition: [sellerDisclosureStructureInput]
  }

  input exteriorDamageItemsInput {
    condition: [sellerDisclosureStructureInput]
  }

  input interiorDamageItemsInput {
    condition: [sellerDisclosureStructureInput]
    odor: String
    manuals: String
  }
  input UpdateSellerDisclosureInput {
    paint: paintDataInput
    exterior: exteriorDamageItemsInput
    interior: interiorDamageItemsInput
    vehicle: vehicleDataInput
    structural: String
    mechanical: String
  }


  type optionsDataType {
    type: String
    value: String
  }
  
  type sellerDisclosureStructure {
    section: String
    severity: String
    options: [optionsDataType]
    repairable: Boolean
    description: String
    imageUrl: String
  }
  
  type vehicleDisclosureStructure {
    section: String
    severity: String
    options: [optionsDataType]
    value: String
    date: String
    repairable: Boolean
    description: String
    imageUrl: String
  }
  
  type vehicleData {
    odometer: [vehicleDisclosureStructure]
    registration: [vehicleDisclosureStructure]
    history: [vehicleDisclosureStructure]
  }
  
  type paintData {
    original: Boolean
    condition: [sellerDisclosureStructure]
  }
  
  type exteriorDamageItems {
    condition: [sellerDisclosureStructure]
  }
  
  type interiorDamageItems {
    condition: [sellerDisclosureStructure]
    odor: String
    manuals: String
  }
  
  type SellerDisclosure {
    id: ID!
    externalId: String
    paint: paintData
    exterior: exteriorDamageItems
    interior: interiorDamageItems
    vehicle: vehicleData
    structural: String
    mechanical: String
  }
```
---

_Note: This service uses the semantic [release process](https://github.com/trade-export/Release.Process)_

# Commit message format for Semantic Release

semantic-release uses the commit messages to determine the type of changes in the codebase. Following formalized conventions for commit messages, semantic-release automatically determines the next semantic version number, generates a changelog and publishes the release.

## Must be one of the following:

| Commit Message [MAJOR]                                                  | ReleaseType     | Format |
| ------------------------------------------------------------------------|:---------------:| ------:|
| **feat:** Adding new feature with major changes                         | Major Release   | 1.0.0  |
| ***BREAKING CHANGE:*** Adding this changes will improve performance     |                 |        |


| Commit Message [MINOR/FEATURE]                                          | ReleaseType     | Format |
| ------------------------------------------------------------------------|:---------------:| ------:|
| **feat:** Added new features                                            | Feature Release | 0.1.0  |
| **fix:** fixed some bugs                                                | Patch Release   | 0.0.1  |
| **perf:** Performance Improvements changes                              | Patch Release   | 0.0.1  |
| **test:** Adding missing or correcting existing tests                   | Patch Release   | 0.0.1  |
| **docs:** Documentation only changes                                    | Patch Release   | 0.0.1  |
| **refactor:** A code change that neither fixes a bug nor adds a feature | Patch Release   | 0.0.1  |
| **chore:** Changes to the build process or auxiliary tools and libraries| Patch Release   | 0.0.1  |
