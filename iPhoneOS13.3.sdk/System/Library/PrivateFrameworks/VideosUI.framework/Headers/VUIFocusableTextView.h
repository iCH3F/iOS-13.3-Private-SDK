//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVFocusableTextView.h>

#import <VideosUI/VUILabelTopMarginCalculationProtocol-Protocol.h>

@class VUILabel, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIFocusableTextView : TVFocusableTextView <VUILabelTopMarginCalculationProtocol>
{
    VUILabel *_computationLabel;
    VUITextLayout *_textLayout;
    VUITextLayout *_titleTextLayout;
}

+ (id)textViewWithElement:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3;
+ (id)textViewWithElement:(id)arg1 textLayout:(id)arg2 titleElement:(id)arg3 titleLayout:(id)arg4 existingTextView:(id)arg5;
+ (id)textViewWithString:(id)arg1 textLayout:(id)arg2 titleString:(id)arg3 titleLayout:(id)arg4 existingTextView:(id)arg5;
+ (id)textViewWithString:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3;
@property(retain, nonatomic) VUITextLayout *titleTextLayout; // @synthesize titleTextLayout=_titleTextLayout;
@property(retain, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property(retain, nonatomic) VUILabel *computationLabel; // @synthesize computationLabel=_computationLabel;
// - (void).cxx_destruct;
- (void)_updateTextColor;
- (void)traitCollectionDidChange:(id)arg1;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;

@end

