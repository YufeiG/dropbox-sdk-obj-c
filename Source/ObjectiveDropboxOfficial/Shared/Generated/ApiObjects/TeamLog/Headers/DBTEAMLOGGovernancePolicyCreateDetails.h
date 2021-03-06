///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGDurationLogInfo;
@class DBTEAMLOGGovernancePolicyCreateDetails;
@class DBTEAMLOGPolicyType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GovernancePolicyCreateDetails` struct.
///
/// Activated a new policy.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGGovernancePolicyCreateDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Policy ID.
@property (nonatomic, readonly, copy) NSString *governancePolicyId;

/// Policy name.
@property (nonatomic, readonly, copy) NSString *name;

/// Policy type.
@property (nonatomic, readonly, nullable) DBTEAMLOGPolicyType *policyType;

/// Duration in days.
@property (nonatomic, readonly) DBTEAMLOGDurationLogInfo *duration;

/// Folders.
@property (nonatomic, readonly, nullable) NSArray<NSString *> *folders;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param governancePolicyId Policy ID.
/// @param name Policy name.
/// @param duration Duration in days.
/// @param policyType Policy type.
/// @param folders Folders.
///
/// @return An initialized instance.
///
- (instancetype)initWithGovernancePolicyId:(NSString *)governancePolicyId
                                      name:(NSString *)name
                                  duration:(DBTEAMLOGDurationLogInfo *)duration
                                policyType:(nullable DBTEAMLOGPolicyType *)policyType
                                   folders:(nullable NSArray<NSString *> *)folders;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param governancePolicyId Policy ID.
/// @param name Policy name.
/// @param duration Duration in days.
///
/// @return An initialized instance.
///
- (instancetype)initWithGovernancePolicyId:(NSString *)governancePolicyId
                                      name:(NSString *)name
                                  duration:(DBTEAMLOGDurationLogInfo *)duration;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GovernancePolicyCreateDetails` struct.
///
@interface DBTEAMLOGGovernancePolicyCreateDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGGovernancePolicyCreateDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGGovernancePolicyCreateDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGGovernancePolicyCreateDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGGovernancePolicyCreateDetails *)instance;

///
/// Deserializes `DBTEAMLOGGovernancePolicyCreateDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGGovernancePolicyCreateDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGGovernancePolicyCreateDetails`
/// object.
///
+ (DBTEAMLOGGovernancePolicyCreateDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
