//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HKCurrentTimeChevronButton, NSString, UIButton;
@protocol HKCurrentTimeViewDelegate;

@interface HKCurrentTimeView : UIView
{
    UIButton *_currentTimeButton;
    HKCurrentTimeChevronButton *_previousTimeIndexButton;
    HKCurrentTimeChevronButton *_nextTimeIndexButton;
    BOOL _disableControls;
    BOOL _currentTimeButtonEnabled;
    BOOL _omitPrevNextButtons;
    NSString *_currentTimeString;
    id <HKCurrentTimeViewDelegate> _delegate;
}

@property(nonatomic) BOOL omitPrevNextButtons; // @synthesize omitPrevNextButtons=_omitPrevNextButtons;
@property(nonatomic) BOOL currentTimeButtonEnabled; // @synthesize currentTimeButtonEnabled=_currentTimeButtonEnabled;
@property(nonatomic) BOOL disableControls; // @synthesize disableControls=_disableControls;
@property(nonatomic) __weak id <HKCurrentTimeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *currentTimeString; // @synthesize currentTimeString=_currentTimeString;
// - (void).cxx_destruct;
- (void)_handleContentSizeCategoryDidChange;
- (double)_backgroundAlpha:(BOOL)arg1;
- (double)_foregroundAlpha:(BOOL)arg1;
- (id)_backgroundColor:(BOOL)arg1;
- (id)_foregroundColor:(BOOL)arg1;
- (id)_labelColor:(BOOL)arg1;
- (id)_tintColor:(BOOL)arg1;
- (id)_colorIfForeground:(BOOL)arg1 enabled:(BOOL)arg2;
- (double)_currentTimeButtonBaselineToBottom;
- (double)_currentTimeButtonBaselineToTop;
- (id)_currentTimeButtonFont;
- (void)nextTimeIndexButtonTapped:(id)arg1;
- (void)previousTimeIndexButtonTapped:(id)arg1;
- (void)currentTimeButtonTapped:(id)arg1;
@property(nonatomic) BOOL nextTimeButtonEnabled;
@property(nonatomic) BOOL previousTimeButtonEnabled;
- (void)setupViewWithWideHorizontalMargin:(BOOL)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithWideHorizontalMargin:(BOOL)arg1;

@end

