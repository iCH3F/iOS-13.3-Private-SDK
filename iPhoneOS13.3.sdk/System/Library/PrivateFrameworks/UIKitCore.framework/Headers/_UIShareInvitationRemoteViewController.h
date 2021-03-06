//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIRemoteViewController.h>

#import <UIKitCore/_UIShareInvitationViewControllerHost-Protocol.h>

@class UIViewController;
@protocol _UISharingPublicController;

__attribute__((visibility("hidden")))
@interface _UIShareInvitationRemoteViewController : _UIRemoteViewController <_UIShareInvitationViewControllerHost>
{
    UIViewController<_UISharingPublicController> *_publicController;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(nonatomic) __weak UIViewController<_UISharingPublicController> *publicController; // @synthesize publicController=_publicController;
// - (void).cxx_destruct;
- (void)_requestContentSize:(CGSize)arg1;
- (void)_updateTraitCollectionForPopoverStatus;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)_requestSavedShareWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_representFullscreenAfterActivityDismissal:(id /* CDUnknownBlockType */)arg1;
- (void)_dismissForActivityRepresentation:(id /* CDUnknownBlockType */)arg1;
- (void)_dismissAndRepresentForActivity:(id /* CDUnknownBlockType */)arg1;
- (void)_performHeaderActionWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_cloudSharingControllerDidActivateShowSharedFolder;
- (void)_cloudSharingControllerDidModifySecondarySwitch:(BOOL)arg1;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:(BOOL)arg1;
- (void)_performAuxiliaryActionWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_tintColorDidChangeToColor:(id)arg1;
- (void)_shareWasMadePrivate;
- (void)_shareDidChange:(id)arg1;
- (void)_dismissViewControllerWithError:(id)arg1;
- (void)_dismissViewController;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

