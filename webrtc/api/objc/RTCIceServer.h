/*
 *  Copyright 2015 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
// TODO(hjon): Update nullability types. See http://crbug/webrtc/5592

@interface RTCIceServer : NSObject

/** URI(s) for this server represented as NSStrings. */
@property(nonatomic, readonly, nonnull) NSArray *urlStrings;
// @property(nonatomic, readonly) NSArray<NSString *> *urlStrings;

/** Username to use if this RTCIceServer object is a TURN server. */
@property(nonatomic, readonly, nullable) NSString *username;

/** Credential to use if this RTCIceServer object is a TURN server. */
@property(nonatomic, readonly, nullable) NSString *credential;

- (nonnull instancetype)init NS_UNAVAILABLE;

/** Convenience initializer for a server with no authentication (e.g. STUN). */
- (nonnull instancetype)initWithURLStrings:(nonnull NSArray *)urlStrings;
// - (instancetype)initWithURLStrings:(NSArray<NSString *> *)urlStrings;

/**
 * Initialize an RTCIceServer with its associated URLs, optional username,
 * optional credential, and credentialType.
 */
- (nonnull instancetype)initWithURLStrings:(nonnull NSArray *)urlStrings
// - (instancetype)initWithURLStrings:(NSArray<NSString *> *)urlStrings
                                  username:(nullable NSString *)username
                                credential:(nullable NSString *)credential
    NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
