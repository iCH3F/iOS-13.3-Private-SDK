//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MFConverter : NSObject
{
}

+ (CGRect)boundsInLogicalUnits:(id)arg1;
+ (CGRect)boundsInPoints:(id)arg1;
+ (BOOL)mapToPdf:(id)arg1;
+ (void)playInCurrentContext:(id)arg1 frame:(CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4;
+ (id)play:(id)arg1 frame:(CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4;
+ (id)playToBitmap:(id)arg1 frame:(CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4;
+ (id)playToPDF:(id)arg1 frame:(CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4;
+ (void)fromBinary:(id)arg1 toXml:(id)arg2;

@end

