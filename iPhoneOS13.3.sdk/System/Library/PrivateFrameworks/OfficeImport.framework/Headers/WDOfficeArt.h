//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface WDOfficeArt : WDRunWithCharacterProperties
{
    OADDrawable *mDrawable;
    BOOL mFloating;
}

+ (int)textBoxTextTypeForRegularTextType:(int)arg1;
// - (void).cxx_destruct;
- (id)description;
- (void)propagateTextTypeToDrawables;
- (void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2;
- (id)imageName;
- (id)imageData;
- (void)setImageBlipRef:(id)arg1;
- (id)imageBlipRef;
- (void)setFloating:(BOOL)arg1;
- (BOOL)isFloating;
- (void)clearDrawable;
- (BOOL)isDrawableOverridden;
- (id)overrideDrawable;
- (void)setDrawable:(id)arg1;
- (id)drawable;
- (int)runType;
- (id)initWithParagraph:(id)arg1;
- (void)checkForFloating:(id)arg1;

@end

