//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockComplications/CLKCComplicationDataSource.h>

@interface NTKComplicationDataSource : CLKCComplicationDataSource
{
}

+ (BOOL)acceptsComplicationType:(NSUInteger)arg1 withFamily:(long long)arg2 forDevice:(id)arg3;
+ (BOOL)acceptsComplicationType:(NSUInteger)arg1 forDevice:(id)arg2;
+ (Class)dataSourceClassForComplicationType:(NSUInteger)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (Class)richComplicationDisplayViewClassForDevice:(id)arg1;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;

@end

