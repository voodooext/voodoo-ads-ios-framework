//
//  VABannerManager.h
//  VoodooAds
//
//  Copyright © 2019 Voodoo. All rights reserved.
//

#import <VoodooAds/VoodooAds.h>

@interface VABannerManager : VAManager

/**
 * A weak reference to the current manager delegate.
 */
@property (nonatomic, weak, nullable) id<VABannerManagerDelegate> delegate;

@end


