//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TTURLSelector : NSObject
{
    NSString *_name;
    SEL _selector;
    TTURLSelector *_next;
}

@property(retain, nonatomic) TTURLSelector *next; // @synthesize next=_next;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)perform:(id)arg1 returnType:(int)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

