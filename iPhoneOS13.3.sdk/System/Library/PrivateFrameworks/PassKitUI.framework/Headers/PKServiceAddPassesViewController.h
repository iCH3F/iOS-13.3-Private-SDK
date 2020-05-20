//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKNavigationController.h>

#import <PassKitUI/PKAddPassesCardStackViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKServiceAddPassesViewControllerProtocol-Protocol.h>

@class PKAddPassesCardStackViewController;

@interface PKServiceAddPassesViewController : PKNavigationController <PKAddPassesCardStackViewControllerDelegate, PKServiceAddPassesViewControllerProtocol>
{
    CGSize _screenSize;
    double _screenScale;
    BOOL _placeholderViewControllerDidCancel;
    PKAddPassesCardStackViewController *_cardStackViewController;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
+ (BOOL)_preventsAppearanceProxyCustomization;
// - (void).cxx_destruct;
- (void)resetBrightness;
- (void)evaluateBrightness;
- (void)ingestPassesWithData:(id)arg1 fromPresentationSource:(NSUInteger)arg2;
- (void)setDisplayPropertiesWithScreenSize:(CGSize)arg1 scale:(double)arg2;
- (void)addPassesCardStackViewController:(id)arg1 didCancelAddingPasses:(id)arg2;
- (void)addPassesCardStackViewController:(id)arg1 didFinishAddingPasses:(id)arg2;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (NSUInteger)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (id)init;

@end

