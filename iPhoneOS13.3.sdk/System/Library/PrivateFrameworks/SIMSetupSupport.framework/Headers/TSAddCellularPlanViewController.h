//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>

@protocol TSSIMSetupFlowDelegate;

@interface TSAddCellularPlanViewController : OBWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem>
{
    BOOL _allowDismiss;
    id <TSSIMSetupFlowDelegate> _delegate;
}

@property __weak id <TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_doneButtonTapped;
- (void)_cancelButtonTapped;
- (void)viewDidLoad;
- (id)initWithType:(NSUInteger)arg1 allowDismiss:(BOOL)arg2;

@end

