//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <DocumentManagerExecutables/DOCAppearanceCustomization-Protocol.h>

@class DOCAppearance;

@interface UIView (DOCAppearanceInheritance) <DOCAppearanceCustomization>
+ (void)load;
- (void)effectiveAppearanceDidChange:(id)arg1;
@property(readonly) DOCAppearance *effectiveAppearance;
- (id)_appearance;
- (id)_inheritedAppearance;
- (void)_notifyAppearanceChange:(id)arg1;
- (void)doc_didMoveToSuperview;
@end

