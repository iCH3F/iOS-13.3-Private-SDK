//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInterfaceActionGroupView.h>


@class CKActionSheetMenuTitleView;
@protocol CKActionSheetMenuViewDelegate;

@interface CKActionSheetMenuView : UIInterfaceActionGroupView <UIInterfaceActionHandlerInvocationDelegate>
{
    CKActionSheetMenuTitleView *_titleView;
    id <CKActionSheetMenuViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CKActionSheetMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)setFrame:(CGRect)arg1;
- (void)updateTitleConstraintsForBoundingRect:(CGRect)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 interfaceActions:(id)arg2;
- (void)dismissSelf;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(id /* CDUnknownBlockType */)arg2 completion:(id /* CDUnknownBlockType */)arg3;

@end

