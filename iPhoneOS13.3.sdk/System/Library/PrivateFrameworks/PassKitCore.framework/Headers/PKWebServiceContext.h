//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PKWebServiceContext : NSObject <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)contextWithArchive:(id)arg1 error:(id )arg2;
+ (id)contextWithArchive:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)archiveAtPath:(id)arg1 error:(id )arg2;
- (void)archiveAtPath:(id)arg1;

@end

