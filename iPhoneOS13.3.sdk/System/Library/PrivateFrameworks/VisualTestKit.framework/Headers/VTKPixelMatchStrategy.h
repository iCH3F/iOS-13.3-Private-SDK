//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualTestKit/VTKColorDifferenceStrategy-Protocol.h>

__attribute__((visibility("hidden")))
@interface VTKPixelMatchStrategy : NSObject <VTKColorDifferenceStrategy>
{
}

- (double)antiAliasingDifferenceBetweenColor:(id)arg1 andColor:(id)arg2;
- (double)differenceBetweenColor:(id)arg1 andColor:(id)arg2;
@property(readonly, nonatomic) double tolerance;

@end

