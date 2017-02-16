/**
 * Copyright (c) 2015-present, Parse, LLC.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

///--------------------------------------
#pragma mark - Running
///--------------------------------------

extern uint8_t const PFCommandRunningDefaultMaxAttemptsCount;
extern uint8_t const PFCommandRunningDefaultTimeoutIntervalForRequests;

///--------------------------------------
#pragma mark - Headers
///--------------------------------------

extern NSString *const PFCommandHeaderNameApplicationId;
extern NSString *const PFCommandHeaderNameClientKey;
extern NSString *const PFCommandHeaderNameClientVersion;
extern NSString *const PFCommandHeaderNameInstallationId;
extern NSString *const PFCommandHeaderNameAppBuildVersion;
extern NSString *const PFCommandHeaderNameAppDisplayVersion;
extern NSString *const PFCommandHeaderNameOSVersion;
extern NSString *const PFCommandHeaderNameSessionToken;

///--------------------------------------
#pragma mark - HTTP Method Override
///--------------------------------------

extern NSString *const PFCommandParameterNameMethodOverride;
