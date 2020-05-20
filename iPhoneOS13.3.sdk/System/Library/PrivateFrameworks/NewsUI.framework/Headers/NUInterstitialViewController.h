//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NewsUI/NUPageable-Protocol.h>

@class ADInterstitialAd, NSString, UIView;
@protocol NULoadingDelegate;

@interface NUInterstitialViewController : UIViewController <NUPageable>
{
    BOOL _hasPresentedInterstitial;
    NSString *_pageIdentifier;
    id <NULoadingDelegate> _loadingDelegate;
    ADInterstitialAd *_interstitial;
    UIView *_interstitialView;
}

@property(nonatomic) BOOL hasPresentedInterstitial; // @synthesize hasPresentedInterstitial=_hasPresentedInterstitial;
@property(retain, nonatomic) UIView *interstitialView; // @synthesize interstitialView=_interstitialView;
@property(readonly, nonatomic) ADInterstitialAd *interstitial; // @synthesize interstitial=_interstitial;
@property(nonatomic) __weak id <NULoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
@property(readonly, copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
// - (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithInterstitial:(id)arg1 pageIdentifier:(id)arg2;

@end

