//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XMSearchBaseViewController;

@interface XMSearchTabModel : NSObject
{
    long long _tabModelType;
    NSString *_tabTitle;
    NSString *_typeName;
    NSString *_typeValue;
    NSString *_typeTrackValue;
    XMSearchBaseViewController *_searchVc;
}

+ (id)trackTypeDict;
+ (id)moduleTypeDict;
+ (id)tabModleWithType:(long long)arg1;
@property(retain, nonatomic) XMSearchBaseViewController *searchVc; // @synthesize searchVc=_searchVc;
@property(copy, nonatomic) NSString *typeTrackValue; // @synthesize typeTrackValue=_typeTrackValue;
@property(copy, nonatomic) NSString *typeValue; // @synthesize typeValue=_typeValue;
@property(copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(copy, nonatomic) NSString *tabTitle; // @synthesize tabTitle=_tabTitle;
@property(nonatomic) long long tabModelType; // @synthesize tabModelType=_tabModelType;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;
- (id)initWithType:(long long)arg1;

@end

