//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVTStickerSheetController, UIScrollView;
@protocol AVTAvatarRecord;

@protocol AVTStickerSheetControllerDelegate <NSObject>
- (void)stickerSheetController:(AVTStickerSheetController *)arg1 didFinishRenderingStickersForRecord:(id <AVTAvatarRecord>)arg2;
- (void)stickerSheetController:(AVTStickerSheetController *)arg1 didInteractWithStickerAtIndex:(long long)arg2 byPeeling:(BOOL)arg3;
- (void)stickerSheetController:(AVTStickerSheetController *)arg1 scrollView:(UIScrollView *)arg2 willEndDraggingWithTargetContentOffset:(inout CGPoint )arg3;
- (void)stickerSheetController:(AVTStickerSheetController *)arg1 didScrollToContentOffset:(CGPoint)arg2;
@end

