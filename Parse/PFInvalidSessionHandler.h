//
//  PFInvalidSessionHandler.h
//  Parse
//
//  Created by Jeremias Nunez on 2/8/17.
//  Copyright © 2017 Parse Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Provides an optional interface for objects that want to act as handlers in case the user's session
 becomes invalid or expired.
 */
@protocol PFInvalidSessionHandler <NSObject>

/**
 Called when the user's session becomes invalid or expired, here you can
 add logic to log the user in again.
 */
- (void)handleInvalidOrExpiredSession;

@end
