//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

@interface CRSIconLayoutState : NSObject <NSSecureCoding>
{
    NSArray *_pages;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *pages; // @synthesize pages=_pages;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)iconOrder;
- (id)initWithPages:(id)arg1;

@end

