//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _SUICAtomRanged : NSObject
{
    NSString *_replacementText;
    _NSRange _editRange;
}

+ (id)atomWithEditRange:(_NSRange)arg1 replacementText:(id)arg2;
@property(retain, nonatomic) NSString *replacementText; // @synthesize replacementText=_replacementText;
@property(nonatomic) _NSRange editRange; // @synthesize editRange=_editRange;
// - (void).cxx_destruct;
- (BOOL)isEqualToEditScriptAtomRanged:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithEditRange:(_NSRange)arg1 replacementText:(id)arg2;

@end

