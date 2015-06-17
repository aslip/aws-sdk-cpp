/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/Event.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kms/model/CreateGrantResult.h>
#include <aws/kms/model/CreateKeyResult.h>
#include <aws/kms/model/DecryptResult.h>
#include <aws/kms/model/DescribeKeyResult.h>
#include <aws/kms/model/EncryptResult.h>
#include <aws/kms/model/GenerateDataKeyResult.h>
#include <aws/kms/model/GenerateDataKeyWithoutPlaintextResult.h>
#include <aws/kms/model/GenerateRandomResult.h>
#include <aws/kms/model/GetKeyPolicyResult.h>
#include <aws/kms/model/GetKeyRotationStatusResult.h>
#include <aws/kms/model/ListAliasesResult.h>
#include <aws/kms/model/ListGrantsResult.h>
#include <aws/kms/model/ListKeyPoliciesResult.h>
#include <aws/kms/model/ListKeysResult.h>
#include <aws/kms/model/ReEncryptResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <future>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace KMS
{

namespace Model
{
    class CreateAliasRequest;
    class CreateGrantRequest;
    class CreateKeyRequest;
    class DecryptRequest;
    class DeleteAliasRequest;
    class DescribeKeyRequest;
    class DisableKeyRequest;
    class DisableKeyRotationRequest;
    class EnableKeyRequest;
    class EnableKeyRotationRequest;
    class EncryptRequest;
    class GenerateDataKeyRequest;
    class GenerateDataKeyWithoutPlaintextRequest;
    class GenerateRandomRequest;
    class GetKeyPolicyRequest;
    class GetKeyRotationStatusRequest;
    class ListAliasesRequest;
    class ListGrantsRequest;
    class ListKeyPoliciesRequest;
    class ListKeysRequest;
    class PutKeyPolicyRequest;
    class ReEncryptRequest;
    class RetireGrantRequest;
    class RevokeGrantRequest;
    class UpdateAliasRequest;
    class UpdateKeyDescriptionRequest;

  typedef Utils::Outcome<NoResult, Client::AWSError<KMSErrors>> CreateAliasOutcome;
  typedef Utils::Outcome<CreateGrantResult, Client::AWSError<KMSErrors>> CreateGrantOutcome;
  typedef Utils::Outcome<CreateKeyResult, Client::AWSError<KMSErrors>> CreateKeyOutcome;
  typedef Utils::Outcome<DecryptResult, Client::AWSError<KMSErrors>> DecryptOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<KMSErrors>> DeleteAliasOutcome;
  typedef Utils::Outcome<DescribeKeyResult, Client::AWSError<KMSErrors>> DescribeKeyOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<KMSErrors>> DisableKeyOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<KMSErrors>> DisableKeyRotationOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<KMSErrors>> EnableKeyOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<KMSErrors>> EnableKeyRotationOutcome;
  typedef Utils::Outcome<EncryptResult, Client::AWSError<KMSErrors>> EncryptOutcome;
  typedef Utils::Outcome<GenerateDataKeyResult, Client::AWSError<KMSErrors>> GenerateDataKeyOutcome;
  typedef Utils::Outcome<GenerateDataKeyWithoutPlaintextResult, Client::AWSError<KMSErrors>> GenerateDataKeyWithoutPlaintextOutcome;
  typedef Utils::Outcome<GenerateRandomResult, Client::AWSError<KMSErrors>> GenerateRandomOutcome;
  typedef Utils::Outcome<GetKeyPolicyResult, Client::AWSError<KMSErrors>> GetKeyPolicyOutcome;
  typedef Utils::Outcome<GetKeyRotationStatusResult, Client::AWSError<KMSErrors>> GetKeyRotationStatusOutcome;
  typedef Utils::Outcome<ListAliasesResult, Client::AWSError<KMSErrors>> ListAliasesOutcome;
  typedef Utils::Outcome<ListGrantsResult, Client::AWSError<KMSErrors>> ListGrantsOutcome;
  typedef Utils::Outcome<ListKeyPoliciesResult, Client::AWSError<KMSErrors>> ListKeyPoliciesOutcome;
  typedef Utils::Outcome<ListKeysResult, Client::AWSError<KMSErrors>> ListKeysOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<KMSErrors>> PutKeyPolicyOutcome;
  typedef Utils::Outcome<ReEncryptResult, Client::AWSError<KMSErrors>> ReEncryptOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<KMSErrors>> RetireGrantOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<KMSErrors>> RevokeGrantOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<KMSErrors>> UpdateAliasOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<KMSErrors>> UpdateKeyDescriptionOutcome;

  typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
  typedef std::future<CreateGrantOutcome> CreateGrantOutcomeCallable;
  typedef std::future<CreateKeyOutcome> CreateKeyOutcomeCallable;
  typedef std::future<DecryptOutcome> DecryptOutcomeCallable;
  typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
  typedef std::future<DescribeKeyOutcome> DescribeKeyOutcomeCallable;
  typedef std::future<DisableKeyOutcome> DisableKeyOutcomeCallable;
  typedef std::future<DisableKeyRotationOutcome> DisableKeyRotationOutcomeCallable;
  typedef std::future<EnableKeyOutcome> EnableKeyOutcomeCallable;
  typedef std::future<EnableKeyRotationOutcome> EnableKeyRotationOutcomeCallable;
  typedef std::future<EncryptOutcome> EncryptOutcomeCallable;
  typedef std::future<GenerateDataKeyOutcome> GenerateDataKeyOutcomeCallable;
  typedef std::future<GenerateDataKeyWithoutPlaintextOutcome> GenerateDataKeyWithoutPlaintextOutcomeCallable;
  typedef std::future<GenerateRandomOutcome> GenerateRandomOutcomeCallable;
  typedef std::future<GetKeyPolicyOutcome> GetKeyPolicyOutcomeCallable;
  typedef std::future<GetKeyRotationStatusOutcome> GetKeyRotationStatusOutcomeCallable;
  typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
  typedef std::future<ListGrantsOutcome> ListGrantsOutcomeCallable;
  typedef std::future<ListKeyPoliciesOutcome> ListKeyPoliciesOutcomeCallable;
  typedef std::future<ListKeysOutcome> ListKeysOutcomeCallable;
  typedef std::future<PutKeyPolicyOutcome> PutKeyPolicyOutcomeCallable;
  typedef std::future<ReEncryptOutcome> ReEncryptOutcomeCallable;
  typedef std::future<RetireGrantOutcome> RetireGrantOutcomeCallable;
  typedef std::future<RevokeGrantOutcome> RevokeGrantOutcomeCallable;
  typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
  typedef std::future<UpdateKeyDescriptionOutcome> UpdateKeyDescriptionOutcomeCallable;
} // namespace Model

    class KMSClient;

  typedef Aws::Utils::Event<KMSClient, const Model::CreateAliasRequest&, const Model::CreateAliasOutcome&, const Aws::Client::AsyncCallerContext*> CreateAliasOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::CreateGrantRequest&, const Model::CreateGrantOutcome&, const Aws::Client::AsyncCallerContext*> CreateGrantOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::CreateKeyRequest&, const Model::CreateKeyOutcome&, const Aws::Client::AsyncCallerContext*> CreateKeyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::DecryptRequest&, const Model::DecryptOutcome&, const Aws::Client::AsyncCallerContext*> DecryptOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::DeleteAliasRequest&, const Model::DeleteAliasOutcome&, const Aws::Client::AsyncCallerContext*> DeleteAliasOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::DescribeKeyRequest&, const Model::DescribeKeyOutcome&, const Aws::Client::AsyncCallerContext*> DescribeKeyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::DisableKeyRequest&, const Model::DisableKeyOutcome&, const Aws::Client::AsyncCallerContext*> DisableKeyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::DisableKeyRotationRequest&, const Model::DisableKeyRotationOutcome&, const Aws::Client::AsyncCallerContext*> DisableKeyRotationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::EnableKeyRequest&, const Model::EnableKeyOutcome&, const Aws::Client::AsyncCallerContext*> EnableKeyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::EnableKeyRotationRequest&, const Model::EnableKeyRotationOutcome&, const Aws::Client::AsyncCallerContext*> EnableKeyRotationOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::EncryptRequest&, const Model::EncryptOutcome&, const Aws::Client::AsyncCallerContext*> EncryptOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::GenerateDataKeyRequest&, const Model::GenerateDataKeyOutcome&, const Aws::Client::AsyncCallerContext*> GenerateDataKeyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::GenerateDataKeyWithoutPlaintextRequest&, const Model::GenerateDataKeyWithoutPlaintextOutcome&, const Aws::Client::AsyncCallerContext*> GenerateDataKeyWithoutPlaintextOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::GenerateRandomRequest&, const Model::GenerateRandomOutcome&, const Aws::Client::AsyncCallerContext*> GenerateRandomOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::GetKeyPolicyRequest&, const Model::GetKeyPolicyOutcome&, const Aws::Client::AsyncCallerContext*> GetKeyPolicyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::GetKeyRotationStatusRequest&, const Model::GetKeyRotationStatusOutcome&, const Aws::Client::AsyncCallerContext*> GetKeyRotationStatusOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::ListAliasesRequest&, const Model::ListAliasesOutcome&, const Aws::Client::AsyncCallerContext*> ListAliasesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::ListGrantsRequest&, const Model::ListGrantsOutcome&, const Aws::Client::AsyncCallerContext*> ListGrantsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::ListKeyPoliciesRequest&, const Model::ListKeyPoliciesOutcome&, const Aws::Client::AsyncCallerContext*> ListKeyPoliciesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::ListKeysRequest&, const Model::ListKeysOutcome&, const Aws::Client::AsyncCallerContext*> ListKeysOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::PutKeyPolicyRequest&, const Model::PutKeyPolicyOutcome&, const Aws::Client::AsyncCallerContext*> PutKeyPolicyOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::ReEncryptRequest&, const Model::ReEncryptOutcome&, const Aws::Client::AsyncCallerContext*> ReEncryptOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::RetireGrantRequest&, const Model::RetireGrantOutcome&, const Aws::Client::AsyncCallerContext*> RetireGrantOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::RevokeGrantRequest&, const Model::RevokeGrantOutcome&, const Aws::Client::AsyncCallerContext*> RevokeGrantOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::UpdateAliasRequest&, const Model::UpdateAliasOutcome&, const Aws::Client::AsyncCallerContext*> UpdateAliasOutcomeReceivedEvent;
  typedef Aws::Utils::Event<KMSClient, const Model::UpdateKeyDescriptionRequest&, const Model::UpdateKeyDescriptionOutcome&, const Aws::Client::AsyncCallerContext*> UpdateKeyDescriptionOutcomeReceivedEvent;

  /*
    <fullname>AWS Key Management Service</fullname> <p> AWS Key Management Service (KMS) is an encryption and key management web service. This guide describes the KMS actions that you can call programmatically. For general information about KMS, see the <a href="http://docs.aws.amazon.com/kms/latest/developerguide/overview.html"> AWS Key Management Service Developer Guide </a> </p> <note> AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby, .Net, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to KMS and AWS. For example, the SDKs take care of tasks such as signing requests (see below), managing errors, and retrying requests automatically. For more information about the AWS SDKs, including how to download and install them, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web Services</a>. </note> <p> We recommend that you use the AWS SDKs to make programmatic API calls to KMS. </p> <p>Clients must support TLS (Transport Layer Security) 1.0. We recommend TLS 1.2. Clients must also support cipher suites with Perfect Forward Secrecy (PFS) such as Ephemeral Diffie-Hellman (DHE) or Elliptic Curve Ephemeral Diffie-Hellman (ECDHE). Most modern systems such as Java 7 and later support these modes. </p> <p><b>Signing Requests</b></p> <p> Requests must be signed by using an access key ID and a secret access key. We strongly recommend that you do not use your AWS account access key ID and secret key for everyday work with KMS. Instead, use the access key ID and secret access key for an IAM user, or you can use the AWS Security Token Service to generate temporary security credentials that you can use to sign requests. </p> <p> All KMS operations require <a href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4</a>. </p> <p><b>Recording API Requests</b></p> <p> KMS supports AWS CloudTrail, a service that records AWS API calls and related events for your AWS account and delivers them to an Amazon S3 bucket that you specify. By using the information collected by CloudTrail, you can determine what requests were made to KMS, who made the request, when it was made, and so on. To learn more about CloudTrail, including how to turn it on and find your log files, see the <a href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/whatiscloudtrail.html">AWS CloudTrail User Guide</a> </p> <p><b>Additional Resources</b></p> <p>For more information about credentials and request signing, see the following:</p> <ul> <li> <a href="http://docs.aws.amazon.com/general/latest/gr/aws-security-credentials.html">AWS Security Credentials</a>. This topic provides general information about the types of credentials used for accessing AWS. </li> <li> <a href="http://docs.aws.amazon.com/STS/latest/UsingSTS/">AWS Security Token Service</a>. This guide describes how to create and use temporary security credentials. </li> <li> <a href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing AWS API Requests</a>. This set of topics walks you through the process of signing a request using an access key ID and a secret access key. </li> </ul> <p><b>Commonly Used APIs</b></p> <p> Of the APIs discussed in this guide, the following will prove the most useful for most applications. You will likely perform actions other than these, such as creating keys and assigning policies, by using the console. <ul> <li><a>Encrypt</a></li> <li><a>Decrypt</a></li> <li><a>GenerateDataKey</a></li> <li><a>GenerateDataKeyWithoutPlaintext</a></li> </ul> </p>
  */
  class AWS_KMS_API KMSClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

     /**
      * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      KMSClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      KMSClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
      * the default http client factory will be used
      */
      KMSClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~KMSClient();

     /*
       <p>Creates a display name for a customer master key. An alias can be used to identify a key and should be unique. The console enforces a one-to-one mapping between the alias and a key. An alias name can contain only alphanumeric characters, forward slashes (/), underscores (_), and dashes (-). An alias must start with the word "alias" followed by a forward slash (alias/). An alias that begins with "aws" after the forward slash (alias/aws...) is reserved by Amazon Web Services (AWS). </p> <p>The alias and the key it is mapped to must be in the same AWS account and the same region.</p> <p>To map an alias to a different key, call <a>UpdateAlias</a>.</p>
     */
     Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;

     /*
       <p>Creates a display name for a customer master key. An alias can be used to identify a key and should be unique. The console enforces a one-to-one mapping between the alias and a key. An alias name can contain only alphanumeric characters, forward slashes (/), underscores (_), and dashes (-). An alias must start with the word "alias" followed by a forward slash (alias/). An alias that begins with "aws" after the forward slash (alias/aws...) is reserved by Amazon Web Services (AWS). </p> <p>The alias and the key it is mapped to must be in the same AWS account and the same region.</p> <p>To map an alias to a different key, call <a>UpdateAlias</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request) const;

     /*
       <p>Creates a display name for a customer master key. An alias can be used to identify a key and should be unique. The console enforces a one-to-one mapping between the alias and a key. An alias name can contain only alphanumeric characters, forward slashes (/), underscores (_), and dashes (-). An alias must start with the word "alias" followed by a forward slash (alias/). An alias that begins with "aws" after the forward slash (alias/aws...) is reserved by Amazon Web Services (AWS). </p> <p>The alias and the key it is mapped to must be in the same AWS account and the same region.</p> <p>To map an alias to a different key, call <a>UpdateAlias</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateAliasAsync(const Model::CreateAliasRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Adds a grant to a key to specify who can access the key and under what conditions. Grants are alternate permission mechanisms to key policies. For more information about grants, see <a href="http://docs.aws.amazon.com/kms/latest/developerguide/grants.html">Grants</a> in the developer guide. If a grant is absent, access to the key is evaluated based on IAM policies attached to the user. <ol> <li><a>ListGrants</a></li> <li><a>RetireGrant</a></li> <li><a>RevokeGrant</a></li> </ol> </p>
     */
     Model::CreateGrantOutcome CreateGrant(const Model::CreateGrantRequest& request) const;

     /*
       <p>Adds a grant to a key to specify who can access the key and under what conditions. Grants are alternate permission mechanisms to key policies. For more information about grants, see <a href="http://docs.aws.amazon.com/kms/latest/developerguide/grants.html">Grants</a> in the developer guide. If a grant is absent, access to the key is evaluated based on IAM policies attached to the user. <ol> <li><a>ListGrants</a></li> <li><a>RetireGrant</a></li> <li><a>RevokeGrant</a></li> </ol> </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateGrantOutcomeCallable CreateGrantCallable(const Model::CreateGrantRequest& request) const;

     /*
       <p>Adds a grant to a key to specify who can access the key and under what conditions. Grants are alternate permission mechanisms to key policies. For more information about grants, see <a href="http://docs.aws.amazon.com/kms/latest/developerguide/grants.html">Grants</a> in the developer guide. If a grant is absent, access to the key is evaluated based on IAM policies attached to the user. <ol> <li><a>ListGrants</a></li> <li><a>RetireGrant</a></li> <li><a>RevokeGrant</a></li> </ol> </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateGrantAsync(const Model::CreateGrantRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Creates a customer master key. Customer master keys can be used to encrypt small amounts of data (less than 4K) directly, but they are most commonly used to encrypt or envelope data keys that are then used to encrypt customer data. For more information about data keys, see <a>GenerateDataKey</a> and <a>GenerateDataKeyWithoutPlaintext</a>.</p>
     */
     Model::CreateKeyOutcome CreateKey(const Model::CreateKeyRequest& request) const;

     /*
       <p>Creates a customer master key. Customer master keys can be used to encrypt small amounts of data (less than 4K) directly, but they are most commonly used to encrypt or envelope data keys that are then used to encrypt customer data. For more information about data keys, see <a>GenerateDataKey</a> and <a>GenerateDataKeyWithoutPlaintext</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateKeyOutcomeCallable CreateKeyCallable(const Model::CreateKeyRequest& request) const;

     /*
       <p>Creates a customer master key. Customer master keys can be used to encrypt small amounts of data (less than 4K) directly, but they are most commonly used to encrypt or envelope data keys that are then used to encrypt customer data. For more information about data keys, see <a>GenerateDataKey</a> and <a>GenerateDataKeyWithoutPlaintext</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateKeyAsync(const Model::CreateKeyRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Decrypts ciphertext. Ciphertext is plaintext that has been previously encrypted by using any of the following functions: <ul> <li><a>GenerateDataKey</a></li> <li><a>GenerateDataKeyWithoutPlaintext</a></li> <li><a>Encrypt</a></li> </ul> </p> <p>Note that if a caller has been granted access permissions to all keys (through, for example, IAM user policies that grant <code>Decrypt</code> permission on all resources), then ciphertext encrypted by using keys in other accounts where the key grants access to the caller can be decrypted. To remedy this, we recommend that you do not grant <code>Decrypt</code> access in an IAM user policy. Instead grant <code>Decrypt</code> access only in key policies. If you must grant <code>Decrypt</code> access in an IAM user policy, you should scope the resource to specific keys or to specific trusted accounts. </p>
     */
     Model::DecryptOutcome Decrypt(const Model::DecryptRequest& request) const;

     /*
       <p>Decrypts ciphertext. Ciphertext is plaintext that has been previously encrypted by using any of the following functions: <ul> <li><a>GenerateDataKey</a></li> <li><a>GenerateDataKeyWithoutPlaintext</a></li> <li><a>Encrypt</a></li> </ul> </p> <p>Note that if a caller has been granted access permissions to all keys (through, for example, IAM user policies that grant <code>Decrypt</code> permission on all resources), then ciphertext encrypted by using keys in other accounts where the key grants access to the caller can be decrypted. To remedy this, we recommend that you do not grant <code>Decrypt</code> access in an IAM user policy. Instead grant <code>Decrypt</code> access only in key policies. If you must grant <code>Decrypt</code> access in an IAM user policy, you should scope the resource to specific keys or to specific trusted accounts. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DecryptOutcomeCallable DecryptCallable(const Model::DecryptRequest& request) const;

     /*
       <p>Decrypts ciphertext. Ciphertext is plaintext that has been previously encrypted by using any of the following functions: <ul> <li><a>GenerateDataKey</a></li> <li><a>GenerateDataKeyWithoutPlaintext</a></li> <li><a>Encrypt</a></li> </ul> </p> <p>Note that if a caller has been granted access permissions to all keys (through, for example, IAM user policies that grant <code>Decrypt</code> permission on all resources), then ciphertext encrypted by using keys in other accounts where the key grants access to the caller can be decrypted. To remedy this, we recommend that you do not grant <code>Decrypt</code> access in an IAM user policy. Instead grant <code>Decrypt</code> access only in key policies. If you must grant <code>Decrypt</code> access in an IAM user policy, you should scope the resource to specific keys or to specific trusted accounts. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DecryptAsync(const Model::DecryptRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Deletes the specified alias. To map an alias to a different key, call <a>UpdateAlias</a>.</p>
     */
     Model::DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest& request) const;

     /*
       <p>Deletes the specified alias. To map an alias to a different key, call <a>UpdateAlias</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteAliasOutcomeCallable DeleteAliasCallable(const Model::DeleteAliasRequest& request) const;

     /*
       <p>Deletes the specified alias. To map an alias to a different key, call <a>UpdateAlias</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteAliasAsync(const Model::DeleteAliasRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Provides detailed information about the specified customer master key.</p>
     */
     Model::DescribeKeyOutcome DescribeKey(const Model::DescribeKeyRequest& request) const;

     /*
       <p>Provides detailed information about the specified customer master key.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeKeyOutcomeCallable DescribeKeyCallable(const Model::DescribeKeyRequest& request) const;

     /*
       <p>Provides detailed information about the specified customer master key.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeKeyAsync(const Model::DescribeKeyRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Marks a key as disabled, thereby preventing its use.</p>
     */
     Model::DisableKeyOutcome DisableKey(const Model::DisableKeyRequest& request) const;

     /*
       <p>Marks a key as disabled, thereby preventing its use.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DisableKeyOutcomeCallable DisableKeyCallable(const Model::DisableKeyRequest& request) const;

     /*
       <p>Marks a key as disabled, thereby preventing its use.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DisableKeyAsync(const Model::DisableKeyRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Disables rotation of the specified key.
     */
     Model::DisableKeyRotationOutcome DisableKeyRotation(const Model::DisableKeyRotationRequest& request) const;

     /*
       Disables rotation of the specified key.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DisableKeyRotationOutcomeCallable DisableKeyRotationCallable(const Model::DisableKeyRotationRequest& request) const;

     /*
       Disables rotation of the specified key.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DisableKeyRotationAsync(const Model::DisableKeyRotationRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Marks a key as enabled, thereby permitting its use. You can have up to 25 enabled keys at one time.
     */
     Model::EnableKeyOutcome EnableKey(const Model::EnableKeyRequest& request) const;

     /*
       Marks a key as enabled, thereby permitting its use. You can have up to 25 enabled keys at one time.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::EnableKeyOutcomeCallable EnableKeyCallable(const Model::EnableKeyRequest& request) const;

     /*
       Marks a key as enabled, thereby permitting its use. You can have up to 25 enabled keys at one time.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void EnableKeyAsync(const Model::EnableKeyRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Enables rotation of the specified customer master key.
     */
     Model::EnableKeyRotationOutcome EnableKeyRotation(const Model::EnableKeyRotationRequest& request) const;

     /*
       Enables rotation of the specified customer master key.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::EnableKeyRotationOutcomeCallable EnableKeyRotationCallable(const Model::EnableKeyRotationRequest& request) const;

     /*
       Enables rotation of the specified customer master key.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void EnableKeyRotationAsync(const Model::EnableKeyRotationRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Encrypts plaintext into ciphertext by using a customer master key. The <code>Encrypt</code> function has two primary use cases: <ul> <li>You can encrypt up to 4 KB of arbitrary data such as an RSA key, a database password, or other sensitive customer information.</li> <li>If you are moving encrypted data from one region to another, you can use this API to encrypt in the new region the plaintext data key that was used to encrypt the data in the original region. This provides you with an encrypted copy of the data key that can be decrypted in the new region and used there to decrypt the encrypted data. </li> </ul> </p> <p>Unless you are moving encrypted data from one region to another, you don't use this function to encrypt a generated data key within a region. You retrieve data keys already encrypted by calling the <a>GenerateDataKey</a> or <a>GenerateDataKeyWithoutPlaintext</a> function. Data keys don't need to be encrypted again by calling <code>Encrypt</code>. </p> <p>If you want to encrypt data locally in your application, you can use the <code>GenerateDataKey</code> function to return a plaintext data encryption key and a copy of the key encrypted under the customer master key (CMK) of your choosing. </p>
     */
     Model::EncryptOutcome Encrypt(const Model::EncryptRequest& request) const;

     /*
       <p>Encrypts plaintext into ciphertext by using a customer master key. The <code>Encrypt</code> function has two primary use cases: <ul> <li>You can encrypt up to 4 KB of arbitrary data such as an RSA key, a database password, or other sensitive customer information.</li> <li>If you are moving encrypted data from one region to another, you can use this API to encrypt in the new region the plaintext data key that was used to encrypt the data in the original region. This provides you with an encrypted copy of the data key that can be decrypted in the new region and used there to decrypt the encrypted data. </li> </ul> </p> <p>Unless you are moving encrypted data from one region to another, you don't use this function to encrypt a generated data key within a region. You retrieve data keys already encrypted by calling the <a>GenerateDataKey</a> or <a>GenerateDataKeyWithoutPlaintext</a> function. Data keys don't need to be encrypted again by calling <code>Encrypt</code>. </p> <p>If you want to encrypt data locally in your application, you can use the <code>GenerateDataKey</code> function to return a plaintext data encryption key and a copy of the key encrypted under the customer master key (CMK) of your choosing. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::EncryptOutcomeCallable EncryptCallable(const Model::EncryptRequest& request) const;

     /*
       <p>Encrypts plaintext into ciphertext by using a customer master key. The <code>Encrypt</code> function has two primary use cases: <ul> <li>You can encrypt up to 4 KB of arbitrary data such as an RSA key, a database password, or other sensitive customer information.</li> <li>If you are moving encrypted data from one region to another, you can use this API to encrypt in the new region the plaintext data key that was used to encrypt the data in the original region. This provides you with an encrypted copy of the data key that can be decrypted in the new region and used there to decrypt the encrypted data. </li> </ul> </p> <p>Unless you are moving encrypted data from one region to another, you don't use this function to encrypt a generated data key within a region. You retrieve data keys already encrypted by calling the <a>GenerateDataKey</a> or <a>GenerateDataKeyWithoutPlaintext</a> function. Data keys don't need to be encrypted again by calling <code>Encrypt</code>. </p> <p>If you want to encrypt data locally in your application, you can use the <code>GenerateDataKey</code> function to return a plaintext data encryption key and a copy of the key encrypted under the customer master key (CMK) of your choosing. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void EncryptAsync(const Model::EncryptRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Generates a data key that you can use in your application to locally encrypt data. This call returns a plaintext version of the key in the <code>Plaintext</code> field of the response object and an encrypted copy of the key in the <code>CiphertextBlob</code> field. The key is encrypted by using the master key specified by the <code>KeyId</code> field. To decrypt the encrypted key, pass it to the <code>Decrypt</code> API. </p> <p>We recommend that you use the following pattern to locally encrypt data: call the <code>GenerateDataKey</code> API, use the key returned in the <code>Plaintext</code> response field to locally encrypt data, and then erase the plaintext data key from memory. Store the encrypted data key (contained in the <code>CiphertextBlob</code> field) alongside of the locally encrypted data. </p> <note>You should not call the <code>Encrypt</code> function to re-encrypt your data keys within a region. <code>GenerateDataKey</code> always returns the data key encrypted and tied to the customer master key that will be used to decrypt it. There is no need to decrypt it twice. </note> <p>If you decide to use the optional <code>EncryptionContext</code> parameter, you must also store the context in full or at least store enough information along with the encrypted data to be able to reconstruct the context when submitting the ciphertext to the <code>Decrypt</code> API. It is a good practice to choose a context that you can reconstruct on the fly to better secure the ciphertext. For more information about how this parameter is used, see <a href="http://docs.aws.amazon.com/kms/latest/developerguide/encrypt-context.html">Encryption Context</a>. </p> <p>To decrypt data, pass the encrypted data key to the <code>Decrypt</code> API. <code>Decrypt</code> uses the associated master key to decrypt the encrypted data key and returns it as plaintext. Use the plaintext data key to locally decrypt your data and then erase the key from memory. You must specify the encryption context, if any, that you specified when you generated the key. The encryption context is logged by CloudTrail, and you can use this log to help track the use of particular data. </p>
     */
     Model::GenerateDataKeyOutcome GenerateDataKey(const Model::GenerateDataKeyRequest& request) const;

     /*
       <p>Generates a data key that you can use in your application to locally encrypt data. This call returns a plaintext version of the key in the <code>Plaintext</code> field of the response object and an encrypted copy of the key in the <code>CiphertextBlob</code> field. The key is encrypted by using the master key specified by the <code>KeyId</code> field. To decrypt the encrypted key, pass it to the <code>Decrypt</code> API. </p> <p>We recommend that you use the following pattern to locally encrypt data: call the <code>GenerateDataKey</code> API, use the key returned in the <code>Plaintext</code> response field to locally encrypt data, and then erase the plaintext data key from memory. Store the encrypted data key (contained in the <code>CiphertextBlob</code> field) alongside of the locally encrypted data. </p> <note>You should not call the <code>Encrypt</code> function to re-encrypt your data keys within a region. <code>GenerateDataKey</code> always returns the data key encrypted and tied to the customer master key that will be used to decrypt it. There is no need to decrypt it twice. </note> <p>If you decide to use the optional <code>EncryptionContext</code> parameter, you must also store the context in full or at least store enough information along with the encrypted data to be able to reconstruct the context when submitting the ciphertext to the <code>Decrypt</code> API. It is a good practice to choose a context that you can reconstruct on the fly to better secure the ciphertext. For more information about how this parameter is used, see <a href="http://docs.aws.amazon.com/kms/latest/developerguide/encrypt-context.html">Encryption Context</a>. </p> <p>To decrypt data, pass the encrypted data key to the <code>Decrypt</code> API. <code>Decrypt</code> uses the associated master key to decrypt the encrypted data key and returns it as plaintext. Use the plaintext data key to locally decrypt your data and then erase the key from memory. You must specify the encryption context, if any, that you specified when you generated the key. The encryption context is logged by CloudTrail, and you can use this log to help track the use of particular data. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GenerateDataKeyOutcomeCallable GenerateDataKeyCallable(const Model::GenerateDataKeyRequest& request) const;

     /*
       <p>Generates a data key that you can use in your application to locally encrypt data. This call returns a plaintext version of the key in the <code>Plaintext</code> field of the response object and an encrypted copy of the key in the <code>CiphertextBlob</code> field. The key is encrypted by using the master key specified by the <code>KeyId</code> field. To decrypt the encrypted key, pass it to the <code>Decrypt</code> API. </p> <p>We recommend that you use the following pattern to locally encrypt data: call the <code>GenerateDataKey</code> API, use the key returned in the <code>Plaintext</code> response field to locally encrypt data, and then erase the plaintext data key from memory. Store the encrypted data key (contained in the <code>CiphertextBlob</code> field) alongside of the locally encrypted data. </p> <note>You should not call the <code>Encrypt</code> function to re-encrypt your data keys within a region. <code>GenerateDataKey</code> always returns the data key encrypted and tied to the customer master key that will be used to decrypt it. There is no need to decrypt it twice. </note> <p>If you decide to use the optional <code>EncryptionContext</code> parameter, you must also store the context in full or at least store enough information along with the encrypted data to be able to reconstruct the context when submitting the ciphertext to the <code>Decrypt</code> API. It is a good practice to choose a context that you can reconstruct on the fly to better secure the ciphertext. For more information about how this parameter is used, see <a href="http://docs.aws.amazon.com/kms/latest/developerguide/encrypt-context.html">Encryption Context</a>. </p> <p>To decrypt data, pass the encrypted data key to the <code>Decrypt</code> API. <code>Decrypt</code> uses the associated master key to decrypt the encrypted data key and returns it as plaintext. Use the plaintext data key to locally decrypt your data and then erase the key from memory. You must specify the encryption context, if any, that you specified when you generated the key. The encryption context is logged by CloudTrail, and you can use this log to help track the use of particular data. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GenerateDataKeyAsync(const Model::GenerateDataKeyRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Returns a data key encrypted by a customer master key without the plaintext copy of that key. Otherwise, this API functions exactly like <a>GenerateDataKey</a>. You can use this API to, for example, satisfy an audit requirement that an encrypted key be made available without exposing the plaintext copy of that key. </p>
     */
     Model::GenerateDataKeyWithoutPlaintextOutcome GenerateDataKeyWithoutPlaintext(const Model::GenerateDataKeyWithoutPlaintextRequest& request) const;

     /*
       <p>Returns a data key encrypted by a customer master key without the plaintext copy of that key. Otherwise, this API functions exactly like <a>GenerateDataKey</a>. You can use this API to, for example, satisfy an audit requirement that an encrypted key be made available without exposing the plaintext copy of that key. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GenerateDataKeyWithoutPlaintextOutcomeCallable GenerateDataKeyWithoutPlaintextCallable(const Model::GenerateDataKeyWithoutPlaintextRequest& request) const;

     /*
       <p>Returns a data key encrypted by a customer master key without the plaintext copy of that key. Otherwise, this API functions exactly like <a>GenerateDataKey</a>. You can use this API to, for example, satisfy an audit requirement that an encrypted key be made available without exposing the plaintext copy of that key. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GenerateDataKeyWithoutPlaintextAsync(const Model::GenerateDataKeyWithoutPlaintextRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Generates an unpredictable byte string. </p>
     */
     Model::GenerateRandomOutcome GenerateRandom(const Model::GenerateRandomRequest& request) const;

     /*
       <p>Generates an unpredictable byte string. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GenerateRandomOutcomeCallable GenerateRandomCallable(const Model::GenerateRandomRequest& request) const;

     /*
       <p>Generates an unpredictable byte string. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GenerateRandomAsync(const Model::GenerateRandomRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Retrieves a policy attached to the specified key.</p>
     */
     Model::GetKeyPolicyOutcome GetKeyPolicy(const Model::GetKeyPolicyRequest& request) const;

     /*
       <p>Retrieves a policy attached to the specified key.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetKeyPolicyOutcomeCallable GetKeyPolicyCallable(const Model::GetKeyPolicyRequest& request) const;

     /*
       <p>Retrieves a policy attached to the specified key.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetKeyPolicyAsync(const Model::GetKeyPolicyRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Retrieves a Boolean value that indicates whether key rotation is enabled for the specified key.
     */
     Model::GetKeyRotationStatusOutcome GetKeyRotationStatus(const Model::GetKeyRotationStatusRequest& request) const;

     /*
       Retrieves a Boolean value that indicates whether key rotation is enabled for the specified key.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetKeyRotationStatusOutcomeCallable GetKeyRotationStatusCallable(const Model::GetKeyRotationStatusRequest& request) const;

     /*
       Retrieves a Boolean value that indicates whether key rotation is enabled for the specified key.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetKeyRotationStatusAsync(const Model::GetKeyRotationStatusRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Lists all of the key aliases in the account.</p>
     */
     Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request) const;

     /*
       <p>Lists all of the key aliases in the account.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListAliasesOutcomeCallable ListAliasesCallable(const Model::ListAliasesRequest& request) const;

     /*
       <p>Lists all of the key aliases in the account.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListAliasesAsync(const Model::ListAliasesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>List the grants for a specified key.</p>
     */
     Model::ListGrantsOutcome ListGrants(const Model::ListGrantsRequest& request) const;

     /*
       <p>List the grants for a specified key.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListGrantsOutcomeCallable ListGrantsCallable(const Model::ListGrantsRequest& request) const;

     /*
       <p>List the grants for a specified key.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListGrantsAsync(const Model::ListGrantsRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Retrieves a list of policies attached to a key.</p>
     */
     Model::ListKeyPoliciesOutcome ListKeyPolicies(const Model::ListKeyPoliciesRequest& request) const;

     /*
       <p>Retrieves a list of policies attached to a key.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListKeyPoliciesOutcomeCallable ListKeyPoliciesCallable(const Model::ListKeyPoliciesRequest& request) const;

     /*
       <p>Retrieves a list of policies attached to a key.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListKeyPoliciesAsync(const Model::ListKeyPoliciesRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Lists the customer master keys.</p>
     */
     Model::ListKeysOutcome ListKeys(const Model::ListKeysRequest& request) const;

     /*
       <p>Lists the customer master keys.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListKeysOutcomeCallable ListKeysCallable(const Model::ListKeysRequest& request) const;

     /*
       <p>Lists the customer master keys.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListKeysAsync(const Model::ListKeysRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Attaches a policy to the specified key.</p>
     */
     Model::PutKeyPolicyOutcome PutKeyPolicy(const Model::PutKeyPolicyRequest& request) const;

     /*
       <p>Attaches a policy to the specified key.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::PutKeyPolicyOutcomeCallable PutKeyPolicyCallable(const Model::PutKeyPolicyRequest& request) const;

     /*
       <p>Attaches a policy to the specified key.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void PutKeyPolicyAsync(const Model::PutKeyPolicyRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Encrypts data on the server side with a new customer master key without exposing the plaintext of the data on the client side. The data is first decrypted and then encrypted. This operation can also be used to change the encryption context of a ciphertext. </p> <p>Unlike other actions, <code>ReEncrypt</code> is authorized twice - once as <code>ReEncryptFrom</code> on the source key and once as <code>ReEncryptTo</code> on the destination key. We therefore recommend that you include the <code>"action":"kms:ReEncrypt*"</code> statement in your key policies to permit re-encryption from or to the key. The statement is included automatically when you authorize use of the key through the console but must be included manually when you set a policy by using the <a>PutKeyPolicy</a> function. </p>
     */
     Model::ReEncryptOutcome ReEncrypt(const Model::ReEncryptRequest& request) const;

     /*
       <p>Encrypts data on the server side with a new customer master key without exposing the plaintext of the data on the client side. The data is first decrypted and then encrypted. This operation can also be used to change the encryption context of a ciphertext. </p> <p>Unlike other actions, <code>ReEncrypt</code> is authorized twice - once as <code>ReEncryptFrom</code> on the source key and once as <code>ReEncryptTo</code> on the destination key. We therefore recommend that you include the <code>"action":"kms:ReEncrypt*"</code> statement in your key policies to permit re-encryption from or to the key. The statement is included automatically when you authorize use of the key through the console but must be included manually when you set a policy by using the <a>PutKeyPolicy</a> function. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ReEncryptOutcomeCallable ReEncryptCallable(const Model::ReEncryptRequest& request) const;

     /*
       <p>Encrypts data on the server side with a new customer master key without exposing the plaintext of the data on the client side. The data is first decrypted and then encrypted. This operation can also be used to change the encryption context of a ciphertext. </p> <p>Unlike other actions, <code>ReEncrypt</code> is authorized twice - once as <code>ReEncryptFrom</code> on the source key and once as <code>ReEncryptTo</code> on the destination key. We therefore recommend that you include the <code>"action":"kms:ReEncrypt*"</code> statement in your key policies to permit re-encryption from or to the key. The statement is included automatically when you authorize use of the key through the console but must be included manually when you set a policy by using the <a>PutKeyPolicy</a> function. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ReEncryptAsync(const Model::ReEncryptRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Retires a grant. You can retire a grant when you're done using it to clean up. You should revoke a grant when you intend to actively deny operations that depend on it. The following are permitted to call this API: <ul> <li>The account that created the grant</li> <li>The <code>RetiringPrincipal</code>, if present</li> <li>The <code>GranteePrincipal</code>, if <code>RetireGrant</code> is a grantee operation</li> </ul> The grant to retire must be identified by its grant token or by a combination of the key ARN and the grant ID. A grant token is a unique variable-length base64-encoded string. A grant ID is a 64 character unique identifier of a grant. Both are returned by the <code>CreateGrant</code> function. </p>
     */
     Model::RetireGrantOutcome RetireGrant(const Model::RetireGrantRequest& request) const;

     /*
       <p>Retires a grant. You can retire a grant when you're done using it to clean up. You should revoke a grant when you intend to actively deny operations that depend on it. The following are permitted to call this API: <ul> <li>The account that created the grant</li> <li>The <code>RetiringPrincipal</code>, if present</li> <li>The <code>GranteePrincipal</code>, if <code>RetireGrant</code> is a grantee operation</li> </ul> The grant to retire must be identified by its grant token or by a combination of the key ARN and the grant ID. A grant token is a unique variable-length base64-encoded string. A grant ID is a 64 character unique identifier of a grant. Both are returned by the <code>CreateGrant</code> function. </p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RetireGrantOutcomeCallable RetireGrantCallable(const Model::RetireGrantRequest& request) const;

     /*
       <p>Retires a grant. You can retire a grant when you're done using it to clean up. You should revoke a grant when you intend to actively deny operations that depend on it. The following are permitted to call this API: <ul> <li>The account that created the grant</li> <li>The <code>RetiringPrincipal</code>, if present</li> <li>The <code>GranteePrincipal</code>, if <code>RetireGrant</code> is a grantee operation</li> </ul> The grant to retire must be identified by its grant token or by a combination of the key ARN and the grant ID. A grant token is a unique variable-length base64-encoded string. A grant ID is a 64 character unique identifier of a grant. Both are returned by the <code>CreateGrant</code> function. </p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RetireGrantAsync(const Model::RetireGrantRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       Revokes a grant. You can revoke a grant to actively deny operations that depend on it.
     */
     Model::RevokeGrantOutcome RevokeGrant(const Model::RevokeGrantRequest& request) const;

     /*
       Revokes a grant. You can revoke a grant to actively deny operations that depend on it.

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RevokeGrantOutcomeCallable RevokeGrantCallable(const Model::RevokeGrantRequest& request) const;

     /*
       Revokes a grant. You can revoke a grant to actively deny operations that depend on it.

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RevokeGrantAsync(const Model::RevokeGrantRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Updates an alias to map it to a different key.</p> <p>An alias is not a property of a key. Therefore, an alias can be mapped to and unmapped from an existing key without changing the properties of the key. </p> <p>An alias name can contain only alphanumeric characters, forward slashes (/), underscores (_), and dashes (-). An alias must start with the word "alias" followed by a forward slash (alias/). An alias that begins with "aws" after the forward slash (alias/aws...) is reserved by Amazon Web Services (AWS). </p> <p>The alias and the key it is mapped to must be in the same AWS account and the same region.</p>
     */
     Model::UpdateAliasOutcome UpdateAlias(const Model::UpdateAliasRequest& request) const;

     /*
       <p>Updates an alias to map it to a different key.</p> <p>An alias is not a property of a key. Therefore, an alias can be mapped to and unmapped from an existing key without changing the properties of the key. </p> <p>An alias name can contain only alphanumeric characters, forward slashes (/), underscores (_), and dashes (-). An alias must start with the word "alias" followed by a forward slash (alias/). An alias that begins with "aws" after the forward slash (alias/aws...) is reserved by Amazon Web Services (AWS). </p> <p>The alias and the key it is mapped to must be in the same AWS account and the same region.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateAliasOutcomeCallable UpdateAliasCallable(const Model::UpdateAliasRequest& request) const;

     /*
       <p>Updates an alias to map it to a different key.</p> <p>An alias is not a property of a key. Therefore, an alias can be mapped to and unmapped from an existing key without changing the properties of the key. </p> <p>An alias name can contain only alphanumeric characters, forward slashes (/), underscores (_), and dashes (-). An alias must start with the word "alias" followed by a forward slash (alias/). An alias that begins with "aws" after the forward slash (alias/aws...) is reserved by Amazon Web Services (AWS). </p> <p>The alias and the key it is mapped to must be in the same AWS account and the same region.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateAliasAsync(const Model::UpdateAliasRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

     /*
       <p>Updates the description of a key.</p>
     */
     Model::UpdateKeyDescriptionOutcome UpdateKeyDescription(const Model::UpdateKeyDescriptionRequest& request) const;

     /*
       <p>Updates the description of a key.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateKeyDescriptionOutcomeCallable UpdateKeyDescriptionCallable(const Model::UpdateKeyDescriptionRequest& request) const;

     /*
       <p>Updates the description of a key.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateKeyDescriptionAsync(const Model::UpdateKeyDescriptionRequest& request, const Aws::Client::AsyncCallerContext* context = nullptr) const;

   /**
    * Adds an event handler for CreateAliasAsync to call upon completion to the handler chain. You need to call this to
    * use CreateAliasAsync.
    */
    inline void RegisterCreateAliasOutcomeReceivedHandler(const CreateAliasOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateAliasOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateAlias.
    */
    inline void ClearAllCreateAliasOutcomeReceivedHandlers()
    {
      m_onCreateAliasOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateGrantAsync to call upon completion to the handler chain. You need to call this to
    * use CreateGrantAsync.
    */
    inline void RegisterCreateGrantOutcomeReceivedHandler(const CreateGrantOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateGrantOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateGrant.
    */
    inline void ClearAllCreateGrantOutcomeReceivedHandlers()
    {
      m_onCreateGrantOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateKeyAsync to call upon completion to the handler chain. You need to call this to
    * use CreateKeyAsync.
    */
    inline void RegisterCreateKeyOutcomeReceivedHandler(const CreateKeyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateKeyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateKey.
    */
    inline void ClearAllCreateKeyOutcomeReceivedHandlers()
    {
      m_onCreateKeyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DecryptAsync to call upon completion to the handler chain. You need to call this to
    * use DecryptAsync.
    */
    inline void RegisterDecryptOutcomeReceivedHandler(const DecryptOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDecryptOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for Decrypt.
    */
    inline void ClearAllDecryptOutcomeReceivedHandlers()
    {
      m_onDecryptOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteAliasAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteAliasAsync.
    */
    inline void RegisterDeleteAliasOutcomeReceivedHandler(const DeleteAliasOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteAliasOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteAlias.
    */
    inline void ClearAllDeleteAliasOutcomeReceivedHandlers()
    {
      m_onDeleteAliasOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeKeyAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeKeyAsync.
    */
    inline void RegisterDescribeKeyOutcomeReceivedHandler(const DescribeKeyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeKeyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeKey.
    */
    inline void ClearAllDescribeKeyOutcomeReceivedHandlers()
    {
      m_onDescribeKeyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DisableKeyAsync to call upon completion to the handler chain. You need to call this to
    * use DisableKeyAsync.
    */
    inline void RegisterDisableKeyOutcomeReceivedHandler(const DisableKeyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDisableKeyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DisableKey.
    */
    inline void ClearAllDisableKeyOutcomeReceivedHandlers()
    {
      m_onDisableKeyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DisableKeyRotationAsync to call upon completion to the handler chain. You need to call this to
    * use DisableKeyRotationAsync.
    */
    inline void RegisterDisableKeyRotationOutcomeReceivedHandler(const DisableKeyRotationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDisableKeyRotationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DisableKeyRotation.
    */
    inline void ClearAllDisableKeyRotationOutcomeReceivedHandlers()
    {
      m_onDisableKeyRotationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for EnableKeyAsync to call upon completion to the handler chain. You need to call this to
    * use EnableKeyAsync.
    */
    inline void RegisterEnableKeyOutcomeReceivedHandler(const EnableKeyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onEnableKeyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for EnableKey.
    */
    inline void ClearAllEnableKeyOutcomeReceivedHandlers()
    {
      m_onEnableKeyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for EnableKeyRotationAsync to call upon completion to the handler chain. You need to call this to
    * use EnableKeyRotationAsync.
    */
    inline void RegisterEnableKeyRotationOutcomeReceivedHandler(const EnableKeyRotationOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onEnableKeyRotationOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for EnableKeyRotation.
    */
    inline void ClearAllEnableKeyRotationOutcomeReceivedHandlers()
    {
      m_onEnableKeyRotationOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for EncryptAsync to call upon completion to the handler chain. You need to call this to
    * use EncryptAsync.
    */
    inline void RegisterEncryptOutcomeReceivedHandler(const EncryptOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onEncryptOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for Encrypt.
    */
    inline void ClearAllEncryptOutcomeReceivedHandlers()
    {
      m_onEncryptOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GenerateDataKeyAsync to call upon completion to the handler chain. You need to call this to
    * use GenerateDataKeyAsync.
    */
    inline void RegisterGenerateDataKeyOutcomeReceivedHandler(const GenerateDataKeyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGenerateDataKeyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GenerateDataKey.
    */
    inline void ClearAllGenerateDataKeyOutcomeReceivedHandlers()
    {
      m_onGenerateDataKeyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GenerateDataKeyWithoutPlaintextAsync to call upon completion to the handler chain. You need to call this to
    * use GenerateDataKeyWithoutPlaintextAsync.
    */
    inline void RegisterGenerateDataKeyWithoutPlaintextOutcomeReceivedHandler(const GenerateDataKeyWithoutPlaintextOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGenerateDataKeyWithoutPlaintextOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GenerateDataKeyWithoutPlaintext.
    */
    inline void ClearAllGenerateDataKeyWithoutPlaintextOutcomeReceivedHandlers()
    {
      m_onGenerateDataKeyWithoutPlaintextOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GenerateRandomAsync to call upon completion to the handler chain. You need to call this to
    * use GenerateRandomAsync.
    */
    inline void RegisterGenerateRandomOutcomeReceivedHandler(const GenerateRandomOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGenerateRandomOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GenerateRandom.
    */
    inline void ClearAllGenerateRandomOutcomeReceivedHandlers()
    {
      m_onGenerateRandomOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetKeyPolicyAsync to call upon completion to the handler chain. You need to call this to
    * use GetKeyPolicyAsync.
    */
    inline void RegisterGetKeyPolicyOutcomeReceivedHandler(const GetKeyPolicyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetKeyPolicyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetKeyPolicy.
    */
    inline void ClearAllGetKeyPolicyOutcomeReceivedHandlers()
    {
      m_onGetKeyPolicyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetKeyRotationStatusAsync to call upon completion to the handler chain. You need to call this to
    * use GetKeyRotationStatusAsync.
    */
    inline void RegisterGetKeyRotationStatusOutcomeReceivedHandler(const GetKeyRotationStatusOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetKeyRotationStatusOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetKeyRotationStatus.
    */
    inline void ClearAllGetKeyRotationStatusOutcomeReceivedHandlers()
    {
      m_onGetKeyRotationStatusOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListAliasesAsync to call upon completion to the handler chain. You need to call this to
    * use ListAliasesAsync.
    */
    inline void RegisterListAliasesOutcomeReceivedHandler(const ListAliasesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListAliasesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListAliases.
    */
    inline void ClearAllListAliasesOutcomeReceivedHandlers()
    {
      m_onListAliasesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListGrantsAsync to call upon completion to the handler chain. You need to call this to
    * use ListGrantsAsync.
    */
    inline void RegisterListGrantsOutcomeReceivedHandler(const ListGrantsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListGrantsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListGrants.
    */
    inline void ClearAllListGrantsOutcomeReceivedHandlers()
    {
      m_onListGrantsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListKeyPoliciesAsync to call upon completion to the handler chain. You need to call this to
    * use ListKeyPoliciesAsync.
    */
    inline void RegisterListKeyPoliciesOutcomeReceivedHandler(const ListKeyPoliciesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListKeyPoliciesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListKeyPolicies.
    */
    inline void ClearAllListKeyPoliciesOutcomeReceivedHandlers()
    {
      m_onListKeyPoliciesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListKeysAsync to call upon completion to the handler chain. You need to call this to
    * use ListKeysAsync.
    */
    inline void RegisterListKeysOutcomeReceivedHandler(const ListKeysOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListKeysOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListKeys.
    */
    inline void ClearAllListKeysOutcomeReceivedHandlers()
    {
      m_onListKeysOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for PutKeyPolicyAsync to call upon completion to the handler chain. You need to call this to
    * use PutKeyPolicyAsync.
    */
    inline void RegisterPutKeyPolicyOutcomeReceivedHandler(const PutKeyPolicyOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onPutKeyPolicyOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for PutKeyPolicy.
    */
    inline void ClearAllPutKeyPolicyOutcomeReceivedHandlers()
    {
      m_onPutKeyPolicyOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ReEncryptAsync to call upon completion to the handler chain. You need to call this to
    * use ReEncryptAsync.
    */
    inline void RegisterReEncryptOutcomeReceivedHandler(const ReEncryptOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onReEncryptOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ReEncrypt.
    */
    inline void ClearAllReEncryptOutcomeReceivedHandlers()
    {
      m_onReEncryptOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RetireGrantAsync to call upon completion to the handler chain. You need to call this to
    * use RetireGrantAsync.
    */
    inline void RegisterRetireGrantOutcomeReceivedHandler(const RetireGrantOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRetireGrantOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RetireGrant.
    */
    inline void ClearAllRetireGrantOutcomeReceivedHandlers()
    {
      m_onRetireGrantOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RevokeGrantAsync to call upon completion to the handler chain. You need to call this to
    * use RevokeGrantAsync.
    */
    inline void RegisterRevokeGrantOutcomeReceivedHandler(const RevokeGrantOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRevokeGrantOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RevokeGrant.
    */
    inline void ClearAllRevokeGrantOutcomeReceivedHandlers()
    {
      m_onRevokeGrantOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateAliasAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateAliasAsync.
    */
    inline void RegisterUpdateAliasOutcomeReceivedHandler(const UpdateAliasOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateAliasOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateAlias.
    */
    inline void ClearAllUpdateAliasOutcomeReceivedHandlers()
    {
      m_onUpdateAliasOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateKeyDescriptionAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateKeyDescriptionAsync.
    */
    inline void RegisterUpdateKeyDescriptionOutcomeReceivedHandler(const UpdateKeyDescriptionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateKeyDescriptionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateKeyDescription.
    */
    inline void ClearAllUpdateKeyDescriptionOutcomeReceivedHandlers()
    {
      m_onUpdateKeyDescriptionOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void CreateAliasAsyncHelper(const Model::CreateAliasRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateGrantAsyncHelper(const Model::CreateGrantRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void CreateKeyAsyncHelper(const Model::CreateKeyRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DecryptAsyncHelper(const Model::DecryptRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DeleteAliasAsyncHelper(const Model::DeleteAliasRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DescribeKeyAsyncHelper(const Model::DescribeKeyRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DisableKeyAsyncHelper(const Model::DisableKeyRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void DisableKeyRotationAsyncHelper(const Model::DisableKeyRotationRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void EnableKeyAsyncHelper(const Model::EnableKeyRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void EnableKeyRotationAsyncHelper(const Model::EnableKeyRotationRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void EncryptAsyncHelper(const Model::EncryptRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GenerateDataKeyAsyncHelper(const Model::GenerateDataKeyRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GenerateDataKeyWithoutPlaintextAsyncHelper(const Model::GenerateDataKeyWithoutPlaintextRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GenerateRandomAsyncHelper(const Model::GenerateRandomRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetKeyPolicyAsyncHelper(const Model::GetKeyPolicyRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void GetKeyRotationStatusAsyncHelper(const Model::GetKeyRotationStatusRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListAliasesAsyncHelper(const Model::ListAliasesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListGrantsAsyncHelper(const Model::ListGrantsRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListKeyPoliciesAsyncHelper(const Model::ListKeyPoliciesRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ListKeysAsyncHelper(const Model::ListKeysRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void PutKeyPolicyAsyncHelper(const Model::PutKeyPolicyRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void ReEncryptAsyncHelper(const Model::ReEncryptRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RetireGrantAsyncHelper(const Model::RetireGrantRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void RevokeGrantAsyncHelper(const Model::RevokeGrantRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void UpdateAliasAsyncHelper(const Model::UpdateAliasRequest& request, const Aws::Client::AsyncCallerContext* context) const;
    void UpdateKeyDescriptionAsyncHelper(const Model::UpdateKeyDescriptionRequest& request, const Aws::Client::AsyncCallerContext* context) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    CreateAliasOutcomeReceivedEvent m_onCreateAliasOutcomeReceived;
    CreateGrantOutcomeReceivedEvent m_onCreateGrantOutcomeReceived;
    CreateKeyOutcomeReceivedEvent m_onCreateKeyOutcomeReceived;
    DecryptOutcomeReceivedEvent m_onDecryptOutcomeReceived;
    DeleteAliasOutcomeReceivedEvent m_onDeleteAliasOutcomeReceived;
    DescribeKeyOutcomeReceivedEvent m_onDescribeKeyOutcomeReceived;
    DisableKeyOutcomeReceivedEvent m_onDisableKeyOutcomeReceived;
    DisableKeyRotationOutcomeReceivedEvent m_onDisableKeyRotationOutcomeReceived;
    EnableKeyOutcomeReceivedEvent m_onEnableKeyOutcomeReceived;
    EnableKeyRotationOutcomeReceivedEvent m_onEnableKeyRotationOutcomeReceived;
    EncryptOutcomeReceivedEvent m_onEncryptOutcomeReceived;
    GenerateDataKeyOutcomeReceivedEvent m_onGenerateDataKeyOutcomeReceived;
    GenerateDataKeyWithoutPlaintextOutcomeReceivedEvent m_onGenerateDataKeyWithoutPlaintextOutcomeReceived;
    GenerateRandomOutcomeReceivedEvent m_onGenerateRandomOutcomeReceived;
    GetKeyPolicyOutcomeReceivedEvent m_onGetKeyPolicyOutcomeReceived;
    GetKeyRotationStatusOutcomeReceivedEvent m_onGetKeyRotationStatusOutcomeReceived;
    ListAliasesOutcomeReceivedEvent m_onListAliasesOutcomeReceived;
    ListGrantsOutcomeReceivedEvent m_onListGrantsOutcomeReceived;
    ListKeyPoliciesOutcomeReceivedEvent m_onListKeyPoliciesOutcomeReceived;
    ListKeysOutcomeReceivedEvent m_onListKeysOutcomeReceived;
    PutKeyPolicyOutcomeReceivedEvent m_onPutKeyPolicyOutcomeReceived;
    ReEncryptOutcomeReceivedEvent m_onReEncryptOutcomeReceived;
    RetireGrantOutcomeReceivedEvent m_onRetireGrantOutcomeReceived;
    RevokeGrantOutcomeReceivedEvent m_onRevokeGrantOutcomeReceived;
    UpdateAliasOutcomeReceivedEvent m_onUpdateAliasOutcomeReceived;
    UpdateKeyDescriptionOutcomeReceivedEvent m_onUpdateKeyDescriptionOutcomeReceived;
  };

} // namespace KMS
} // namespace Aws
