//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AEMessagesShelfLayout;

@protocol AEMessagesShelfLayoutDelegate <NSObject>
- (BOOL)layoutShouldShowVideoDuration:(AEMessagesShelfLayout *)arg1;
- (double)layout:(AEMessagesShelfLayout *)arg1 itemAtIndexPathDuration:(struct PXSimpleIndexPath)arg2;
- (BOOL)layout:(AEMessagesShelfLayout *)arg1 itemAtIndexPathIsAnimatedImage:(struct PXSimpleIndexPath)arg2;
- (BOOL)layout:(AEMessagesShelfLayout *)arg1 itemAtIndexPathIsLoop:(struct PXSimpleIndexPath)arg2;
- (BOOL)layout:(AEMessagesShelfLayout *)arg1 itemAtIndexPathIsVideo:(struct PXSimpleIndexPath)arg2;
- (long long)layout:(AEMessagesShelfLayout *)arg1 irisToggleStateForItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (double)layout:(AEMessagesShelfLayout *)arg1 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath)arg2;
@end

