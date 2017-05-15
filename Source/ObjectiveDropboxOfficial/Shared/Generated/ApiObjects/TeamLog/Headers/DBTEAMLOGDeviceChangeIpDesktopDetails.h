///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGDeviceChangeIpDesktopDetails;
@class DBTEAMLOGDeviceLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DeviceChangeIpDesktopDetails` struct.
///
/// IP address associated with active desktop session changed.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDeviceChangeIpDesktopDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Device information.
@property (nonatomic, readonly) DBTEAMLOGDeviceLogInfo *deviceInfo;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param deviceInfo Device information.
///
/// @return An initialized instance.
///
- (instancetype)initWithDeviceInfo:(DBTEAMLOGDeviceLogInfo *)deviceInfo;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DeviceChangeIpDesktopDetails` struct.
///
@interface DBTEAMLOGDeviceChangeIpDesktopDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGDeviceChangeIpDesktopDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGDeviceChangeIpDesktopDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceChangeIpDesktopDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGDeviceChangeIpDesktopDetails *)instance;

///
/// Deserializes `DBTEAMLOGDeviceChangeIpDesktopDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceChangeIpDesktopDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGDeviceChangeIpDesktopDetails`
/// object.
///
+ (DBTEAMLOGDeviceChangeIpDesktopDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END