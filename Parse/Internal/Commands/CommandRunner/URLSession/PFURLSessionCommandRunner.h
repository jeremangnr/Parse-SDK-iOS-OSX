/**
 * Copyright (c) 2015-present, Parse, LLC.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

#import "PFCommandRunning.h"
#import "PFInvalidSessionHandler.h"

NS_ASSUME_NONNULL_BEGIN

@interface PFURLSessionCommandRunner : NSObject <PFCommandRunning>

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

+ (instancetype)commandRunnerWithDataSource:(id<PFInstallationIdentifierStoreProvider>)dataSource
                              retryAttempts:(NSUInteger)retryAttempts
                 timeoutIntervalForRequests:(NSTimeInterval)timeoutIntervalForRequests
                              applicationId:(NSString *)applicationId
                                  clientKey:(nullable NSString *)clientKey
                                  serverURL:(NSURL *)serverURL
                      invalidSessionHandler:(id<PFInvalidSessionHandler>)handler;

@end

NS_ASSUME_NONNULL_END
