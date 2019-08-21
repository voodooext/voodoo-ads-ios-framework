//
//  VAManagerDelegates.h
//  VoodooAds
//
//  Created by Safouane Azzabi on 11/02/2019.
//  Copyright © 2019 Voodoo. All rights reserved.
//

typedef NS_ENUM(NSInteger, VCStatusCode) {
    VCStatusCodeSuccess = 1,
    VCStatusCodeError = 2
};

#pragma mark - VAManagerDelegate

@class VAManager;

@protocol VAManagerDelegate <NSObject>

@optional

/**
 *  This method is called when a request ad is finished with ad
 @param manager Instance of a VAManager subclass responsible of the ad
 */
- (void)adRequestFinished:(nonnull VAManager *)manager;

/**
*  This method is called when a request ad is finished without ad
 @param manager Instance of a VAManager subclass responsible of the ad
*/
- (void)adRequestFailed:(nonnull VAManager *)manager;


/**
 *  This method is called when ads is clicked
 @param manager Instance of a VAManager subclass responsible of the ad
 */
- (void)adDidReceiveTap:(nonnull VAManager *)manager;

/**
 *  This method is called just before voodooAds'ad appears on screen.
 @param manager Instance of a VAManager subclass responsible of the ad
 */
- (void)adViewWillAppear:(nonnull VAManager *)manager;

/**
 *  This method is called when the ad appears on screen.
 @param manager Instance of a VAManager subclass responsible of the ad
 */
- (void)adViewDidAppear:(nonnull VAManager *)manager;

/**
 *  This method is called when the ad disappear on screen.
 @param status member of VCStatusCode respresenting the status of the ad
 @param manager Instance of a VAManager subclass responsible of the ad
 */
- (void)adView:(nonnull VAManager *)manager didDisappearWithStatus:(VCStatusCode)status;

/**
 *  This method is called when the ad will disappear on screen.
 @param status member of VCStatusCode respresenting the status of the ad
 @param manager Instance of a VAManager subclass responsible of the ad
 */
- (void)adView:(nonnull VAManager *)manager willDisappearWithStatus:(VCStatusCode)status;
@end


#pragma mark - VABannerManagerDelegate

@protocol VABannerManagerDelegate <VAManagerDelegate>

/**
 * Called when the banner loading failed
 @param manager Instance of a VAManager subclass responsible of the ad
 */
- (void)managerDidFailToLoadBanner:(nonnull VAManager *)manager;

/**
 * Called when the banner ad is loaded
 @param manager Instance of a VAManager subclass responsible of the ad
 @param bannerView Instance of a UIView representing the banner to show
 */
- (void)manager:(nonnull VAManager *)manager didLoadBanner:(nonnull UIView *)bannerView;

@end
