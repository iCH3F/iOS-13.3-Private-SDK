//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, _SearchBarContent;
@protocol HKIncrementalSearchBarDelegate;

@interface HKIncrementalSearchBar : UIView
{
    NSString *_matchDisplayText;
    _SearchBarContent *_searchBarContent;
}

+ (id)regularExpressionFromString:(id)arg1 quoteForJavascript:(BOOL)arg2 caseless:(BOOL )arg3;
+ (id)_patternFromSearchString:(id)arg1 quoteForJavascript:(BOOL)arg2;
+ (BOOL)_hasUppercaseCharacters:(id)arg1;
@property(readonly, nonatomic) _SearchBarContent *searchBarContent; // @synthesize searchBarContent=_searchBarContent;
@property(retain, nonatomic) NSString *matchDisplayText; // @synthesize matchDisplayText=_matchDisplayText;
// - (void).cxx_destruct;
- (void)doneAction:(id)arg1;
- (void)_lowerKeyboard;
- (void)activateSearch:(BOOL)arg1;
- (void)setMatchDisplayVisible:(BOOL)arg1;
@property(retain, nonatomic) NSString *searchText;
- (void)setDownEnabled:(BOOL)arg1;
- (void)setUpEnabled:(BOOL)arg1;
@property(retain, nonatomic) id <HKIncrementalSearchBarDelegate> searchBarDelegate;
- (id)inputAccessoryView;
- (BOOL)canBecomeFirstResponder;
- (CGSize)intrinsicContentSize;
- (void)searchKeyboardDidHide:(id)arg1;
- (BOOL)searchIsActive;
- (BOOL)keyboardIsDown;
- (BOOL)keyboardIsUp;
- (void)dealloc;
- (id)init;

@end

