//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSString, OITSULocale;

__attribute__((visibility("hidden")))
@interface OITSUDurationFormatter : NSFormatter
{
    NSString *mFormat;
    OITSULocale *mLocale;
    int mCompactStyleStartUnit;
}

@property(nonatomic) int compactStyleStartUnit; // @synthesize compactStyleStartUnit=mCompactStyleStartUnit;
@property(readonly) OITSULocale *locale; // @synthesize locale=mLocale;
@property(copy, nonatomic) NSString *format; // @synthesize format=mFormat;
- (BOOL)getObjectValue:(out id )arg1 forString:(id)arg2 errorDescription:(out id )arg3;
- (id)stringForObjectValue:(id)arg1;
- (void)dealloc;
- (void)p_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithLocale:(id)arg1;

@end

