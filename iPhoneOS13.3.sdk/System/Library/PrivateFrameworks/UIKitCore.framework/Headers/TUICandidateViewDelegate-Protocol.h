//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexPath, TIKeyboardCandidate, TUICandidateView;

@protocol TUICandidateViewDelegate <NSObject>

@optional
- (void)candidateViewNeedsToExpand:(TUICandidateView *)arg1;
- (void)candidateViewWillBeginDragging:(TUICandidateView *)arg1;
- (void)candidateViewDidTapInlineText:(TUICandidateView *)arg1;
- (void)candidateViewDidTapArrowButton:(TUICandidateView *)arg1;
- (void)candidateViewSelectionDidChange:(TUICandidateView *)arg1 inGridType:(long long)arg2;
- (void)candidateView:(TUICandidateView *)arg1 didAcceptCandidate:(TIKeyboardCandidate *)arg2 atIndexPath:(NSIndexPath *)arg3 inGridType:(long long)arg4;
@end

