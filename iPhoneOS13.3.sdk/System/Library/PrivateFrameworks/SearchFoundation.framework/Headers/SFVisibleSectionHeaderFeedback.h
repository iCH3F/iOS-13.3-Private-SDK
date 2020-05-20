//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class SFResultSection;

@interface SFVisibleSectionHeaderFeedback : SFFeedback
{
    SFResultSection *_section;
    NSUInteger _headerType;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger headerType; // @synthesize headerType=_headerType;
@property(copy, nonatomic) SFResultSection *section; // @synthesize section=_section;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSection:(id)arg1 headerType:(NSUInteger)arg2;

@end

