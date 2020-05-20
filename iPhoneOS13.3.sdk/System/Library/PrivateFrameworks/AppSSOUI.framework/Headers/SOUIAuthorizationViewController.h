//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AppSSOUI/_UIRemoteViewControllerContaining-Protocol.h>

@class _UIRemoteViewController;
@protocol SOUIAuthorizationViewControllerDelegate;

@interface SOUIAuthorizationViewController : UIViewController <_UIRemoteViewControllerContaining, UIGestureRecognizerDelegate>
{
    UIViewController *_extensionViewController;
    id <SOUIAuthorizationViewControllerDelegate> _delegate;
}

@property __weak id <SOUIAuthorizationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_cancel;
@property(readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (NSUInteger)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)loadView;
- (id)initWithExtensionViewController:(id)arg1 hints:(id)arg2;

@end
