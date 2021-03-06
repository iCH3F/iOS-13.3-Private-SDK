//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderOutput/SCROBrailleKey.h>


@class NSString;

@interface SCROBrailleKeyboardKey : SCROBrailleKey <NSSecureCoding>
{
    unsigned int _modifiers;
    unsigned int _keyCode;
    unsigned int _virtualKeyCode;
    NSString *_keyString;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int virtualKeyCode; // @synthesize virtualKeyCode=_virtualKeyCode;
@property(nonatomic) unsigned int keyCode; // @synthesize keyCode=_keyCode;
@property(nonatomic) unsigned int modifiers; // @synthesize modifiers=_modifiers;
@property(retain, nonatomic) NSString *keyString; // @synthesize keyString=_keyString;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

