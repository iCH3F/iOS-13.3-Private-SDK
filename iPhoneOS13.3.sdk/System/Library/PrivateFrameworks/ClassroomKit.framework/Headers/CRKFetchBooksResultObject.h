//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSArray;

@interface CRKFetchBooksResultObject : CATTaskResultObject
{
    NSArray *_books;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *books; // @synthesize books=_books;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

