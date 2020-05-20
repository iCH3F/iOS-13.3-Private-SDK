//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKMessageAcknowledgmentPickerBarItemViewDelegate-Protocol.h>

@class CKMessagePartChatItem;
@protocol CKMessageAcknowledgmentPickerBarDelegate;

@interface CKMessageAcknowledgmentPickerBarViewController : UIViewController <CKMessageAcknowledgmentPickerBarItemViewDelegate>
{
    id <CKMessageAcknowledgmentPickerBarDelegate> _delegate;
    CKMessagePartChatItem *_chatItem;
}

@property(retain, nonatomic) CKMessagePartChatItem *chatItem; // @synthesize chatItem=_chatItem;
@property(nonatomic) __weak id <CKMessageAcknowledgmentPickerBarDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)performCancelAnimation:(id /* CDUnknownBlockType */)arg1;
- (void)performSendAnimation:(id /* CDUnknownBlockType */)arg1;
- (void)performShowAnimation:(id /* CDUnknownBlockType */)arg1;
- (CGRect)calculateFrameRelativeToSiblingViewFrame:(CGRect)arg1 withinBounds:(CGRect)arg2;
- (void)adjustTailRelativeSiblingViewFrame:(CGRect)arg1 pickerFrame:(CGRect)arg2;
- (void)adjustTailRelativeSiblingViewFrame:(CGRect)arg1;
- (void)pickerBarItemViewSelectionDidChange:(id)arg1;
- (void)loadView;
- (id)pickerView;
- (id)initWithChatItem:(id)arg1;

@end

