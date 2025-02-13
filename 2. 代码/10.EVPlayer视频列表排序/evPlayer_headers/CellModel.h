//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface CellModel : NSObject
{
    _Bool _hasChild;
    NSString *_avatar;
    NSString *_title;
    NSString *_describle;
    UIColor *_color;
}

+ (id)modelWithTitle:(id)arg1 addDes:(id)arg2 hasChild:(_Bool)arg3;
+ (id)modelWithTitle:(id)arg1 addIcon:(id)arg2 hasChild:(_Bool)arg3;
+ (id)modelWithTitle:(id)arg1 addIcon:(id)arg2 titleColor:(id)arg3 hasChild:(_Bool)arg4;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) _Bool hasChild; // @synthesize hasChild=_hasChild;
@property(copy, nonatomic) NSString *describle; // @synthesize describle=_describle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;

@end

