//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WebContentAnalysis/WFPINEntryViewControllerProtocol-Protocol.h>

@class NSArray, NSString, NSURL, WFRemotePINEntryViewController, _UIFallbackPresentationViewController;

__attribute__((visibility("hidden")))
@interface WFPINEntryViewController : UIViewController <WFPINEntryViewControllerProtocol>
{
    _UIFallbackPresentationViewController *_fallbackPresentationVC;
    NSArray *_windowsWithDisabledRotation;
    UIViewController *_rootViewControllerToUse;
    WFRemotePINEntryViewController *_remoteViewController;
    NSURL *_URL;
    NSString *_pageTitle;
    id /* CDUnknownBlockType */ _completion;
    id /* CDUnknownBlockType */ _dismissCompletionHandler;
}

+ (Class)remoteViewControllerClass;
+ (id)serviceViewControllerClassName;
@property(copy, nonatomic) id /* CDUnknownBlockType */ dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
// - (void).cxx_destruct;
- (void)userDidCancel;
- (void)userEnteredCorrectPIN;
- (NSUInteger)_supportedInterfaceOrientationsForRootViewController;
- (id)delegate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (NSUInteger)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)hasUIWebViewSubView:(id)arg1;
- (void)presentViewControllerAnimated:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)insertRemoteViewController:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;

@end

