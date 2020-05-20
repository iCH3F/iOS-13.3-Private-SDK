//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlViewProfile.h>

@class UIColor;

@interface HUQuickControlWheelPickerViewProfile : HUQuickControlViewProfile
{
    BOOL _sizeToFitTextWidth;
    BOOL _uppercaseRowTitles;
    BOOL _showOffState;
    double _borderWidth;
    UIColor *_borderColor;
    double _cornerRadius;
    double _selectedRowBorderWidth;
    double _selectedRowCornerRadius;
    NSUInteger _style;
}

@property(nonatomic) NSUInteger style; // @synthesize style=_style;
@property(nonatomic) BOOL showOffState; // @synthesize showOffState=_showOffState;
@property(nonatomic) double selectedRowCornerRadius; // @synthesize selectedRowCornerRadius=_selectedRowCornerRadius;
@property(nonatomic) double selectedRowBorderWidth; // @synthesize selectedRowBorderWidth=_selectedRowBorderWidth;
@property(nonatomic) BOOL uppercaseRowTitles; // @synthesize uppercaseRowTitles=_uppercaseRowTitles;
@property(nonatomic) BOOL sizeToFitTextWidth; // @synthesize sizeToFitTextWidth=_sizeToFitTextWidth;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)_setMultiStateStyleProperties;
- (void)_setDefaultStyleProperties;
- (id)init;

@end

