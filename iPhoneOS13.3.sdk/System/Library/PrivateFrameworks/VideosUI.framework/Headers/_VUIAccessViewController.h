//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, NSMutableArray, OBPrivacyLinkController, VUIAccessView_iOS, VUIAppSpinnerView;

__attribute__((visibility("hidden")))
@interface _VUIAccessViewController : UIViewController
{
    VUIAccessView_iOS *_accessView;
    VUIAppSpinnerView *_loadingView;
    NSArray *_channels;
    OBPrivacyLinkController *_privacyController;
    NSMutableArray *_bundleIDs;
    NSDictionary *_options;
    BOOL _hasCalledCompletion;
    NSArray *_appInfos;
    NSArray *_appChannels;
    NSMutableArray *_channelIds;
    BOOL _hasOptedIn;
    BOOL _shouldDenyOnCancel;
    id /* CDUnknownBlockType */ _completionHandler;
}

+ (BOOL)_isHostedInRemoteViewService;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
// - (void).cxx_destruct;
- (id)preferredFocusEnvironments;
- (id)cappedTraitCollection;
- (id)_watchListAppIcon;
- (void)_fetchRemoteAppInfo;
- (id)_imageForBundleID:(id)arg1;
- (void)_presentGenericErrorWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_toggleLoadingScreen;
- (void)_setupAccessViews;
- (void)_handleNackButton:(id)arg1;
- (void)_handleMenuGesture:(id)arg1;
- (void)_handleSeeAllButton:(id)arg1;
- (void)_disallow:(id)arg1;
- (void)_allow:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)_init;
- (id)init;
- (void)dealloc;
- (id)initWithBundleIDs:(id)arg1 channels:(id)arg2 options:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;

@end

