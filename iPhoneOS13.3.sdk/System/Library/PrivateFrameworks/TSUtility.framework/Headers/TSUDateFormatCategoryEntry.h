//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface TSUDateFormatCategoryEntry : NSObject
{
    unsigned short mSeparator;
    struct __CFArray mFormatters;
    NSMutableSet *mFormatStrings;
}

- (struct __CFDate )newDateFromString:(struct __CFString )arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(const struct __CFString )arg3 perfect:(BOOL )arg4;
- (void)addFormat:(id)arg1 locale:(struct __CFLocale )arg2;
- (unsigned short)separator;
- (void)dealloc;
- (id)initWithSeparator:(unsigned short)arg1;

@end
