//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSRow.h>

@interface PTEditFloatRow : PTSRow
{
    NSUInteger _precision;
}

@property(nonatomic) NSUInteger precision; // @synthesize precision=_precision;
- (id)init;
- (id)between:(double)arg1 and:(double)arg2;
- (id)precision:(NSUInteger)arg1;

@end
