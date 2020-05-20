//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQHBulletInfo : NSObject
{
    int mType;
    int mBulletIndent;
    int mTextIndent;
    struct __CFString mChar;
    BOOL mHasNumber;
    int mNumber;
    int mLabelType;
    GQDSStyle *mStyle;
}

- (id)style;
- (void)setStyle:(id)arg1;
- (int)textIndent;
- (void)setTextIndent:(int)arg1;
- (int)bulletIndent;
- (void)setBulletIndent:(int)arg1;
- (struct __CFString )createTierStringNumber;
- (struct __CFString )bulletChar;
- (void)setBulletChar:(struct __CFString )arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)labelType;
- (void)setLabelType:(int)arg1;
- (void)setHasNumber:(BOOL)arg1;
- (BOOL)hasNumber;
- (int)number;
- (void)setNumber:(int)arg1;
- (void)dealloc;

@end

