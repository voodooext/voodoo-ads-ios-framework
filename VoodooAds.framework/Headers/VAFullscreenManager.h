//
//  VAFullscreenManager.h
//  VoodooAds
//
//  Created by Safouane Azzabi on 11/02/2019.
//  Copyright © 2019 Voodoo. All rights reserved.
//

#import "VAManager.h"
#import "VAManagerDelegates.h"

@interface VAFullscreenManager: VAManager

/**
 * A weak reference to the current manager delegate.
 */
@property (nonatomic, weak, nullable) id<VAManagerDelegate> delegate;

@end
