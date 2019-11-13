//
//  VAAdManager.h
//  VoodooAds
//
//  Copyright © 2019 Voodoo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "VAManagerDelegates.h"

#define kVAPlacementFormatInterstitial @"interstitial"
#define kVAPlacementFormatRewarded @"rewarded"
#define kVAPlacementFormatBanner @"banner"

typedef NS_ENUM(NSInteger, VAPlacementFormat) {
    VAPlacementFormatUnknown = 0,
    VAPlacementFormatInterstitial = 1,
    VAPlacementFormatRewarded = 2,
    VAPlacementFormatBanner = 3
};

#pragma mark - VAManager

@interface VAManager : NSObject

/**
 * A weak reference to the current manager delegate.
 */
@property (nonatomic, weak, nullable) id<VAManagerDelegate> delegate;

/**
 * Returns the placement format of the current manager.
 */
@property (nonatomic, readonly) VAPlacementFormat placementFormat;


/**
 *  Tells wether an ad is available.
 */
@property (nonatomic, readonly) BOOL isAdAvailable;


/**
 * initilize the manager
 *
 * @param userConsent YES if the user gives his consent for tracking, NO if he refuses.
 * @param isGDPRApplicable YES if GDPR is applicable.
 * @param delegate VdManager's delegate.
 */
- (instancetype _Nullable )initWithConsent:(BOOL)userConsent
                          isGDPRApplicable:(BOOL)isGDPRApplicable
                                  delegate:(nullable id<VAManagerDelegate>)delegate;


/**
 * Request an Ad to display with the given zone id
 * @param zoneId Zone identifier.
 * @param mediationName  Mediation name.
 */
- (void)requestWithZoneId:(nullable NSString *)zoneId
            mediationName:(NSString *_Nullable)mediationName;
 
/**
 *  Plays a video ad for a given placement format.
 *
 *  @param viewController The UIViewController to push from. 
 *  @param animated Wether the appearing of the video should be animated.
 */
- (void)showFromViewController:(nullable UIViewController *)viewController
                      animated:(BOOL)animated;


/**
 *  @return voodooAds sdk version.
 */
+ (nonnull NSString *)sdkVersion;


/**
 *  @return voodooAds sdk Name.
 */
+ (nonnull NSString *)sdkName;


/**
 *  @return A boolean value indicating if the logging is enabled
 */
+ (BOOL)loggingEnabled;


/**
 *  Set the logging status
 *  @param loggingEnabled A boolean value indicating if the logging is enabled
 */
+ (void)setLoggingEnabled:(BOOL)loggingEnabled;
 

@end
