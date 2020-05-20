//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ControlCenterUIKit/CCUIContentModuleContentViewController-Protocol.h>

@class CCUIButtonModuleView, CCUICAPackageDescription, NSString, UIColor, UIImage;

@interface CCUIButtonModuleViewController : UIViewController <CCUIContentModuleContentViewController>
{
    CCUIButtonModuleView *_buttonModuleView;
    BOOL _expanded;
}

@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
// - (void).cxx_destruct;
- (void)didTransitionToExpandedContentMode:(BOOL)arg1;
- (void)willTransitionToExpandedContentMode:(BOOL)arg1;
@property(readonly, nonatomic) double preferredExpandedContentHeight;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
@property(readonly, nonatomic) BOOL hasGlyph;
- (void)_buttonTapped:(id)arg1 forEvent:(id)arg2;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;
- (void)_buttonTouchDown:(id)arg1 forEvent:(id)arg2;
- (void)buttonTouchDown:(id)arg1 forEvent:(id)arg2;
@property(readonly, nonatomic) CCUIButtonModuleView *buttonView;
@property(nonatomic, getter=isSelected) BOOL selected;
@property(nonatomic) double glyphScale;
@property(copy, nonatomic) NSString *glyphState;
@property(retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property(retain, nonatomic) UIColor *selectedGlyphColor;
@property(retain, nonatomic) UIImage *selectedGlyphImage;
@property(retain, nonatomic) UIColor *glyphColor;
@property(retain, nonatomic) UIImage *glyphImage;

@end

