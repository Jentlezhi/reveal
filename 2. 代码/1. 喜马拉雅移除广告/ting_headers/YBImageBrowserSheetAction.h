//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YBImageBrowserSheetAction : NSObject
{
    NSString *_name;
    NSString *_identity;
    CDUnknownBlockType _action;
}

+ (id)actionWithName:(id)arg1 identity:(id)arg2 action:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *identity; // @synthesize identity=_identity;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

