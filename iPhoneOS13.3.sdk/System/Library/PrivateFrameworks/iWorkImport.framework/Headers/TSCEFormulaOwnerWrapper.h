//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface TSCEFormulaOwnerWrapper : NSObject <NSCopying>
{
    UUIDData_5fbc143e _ownerUID;
}

- (id).cxx_construct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTSCEFormulaOwnerWrapper:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) UUIDData_5fbc143e ownerUID;
- (id)initWithFormulaOwnerUID:(const UUIDData_5fbc143e )arg1;

@end

