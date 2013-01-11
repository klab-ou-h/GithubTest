//
//  HelloWorldLayer.h
//  GithubTest
//
//  Created by wang feng on 12/12/28.
//  Copyright wang feng 2012年. All rights reserved.
//


#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{
    // Insert a test comment.
    // This comment is added in GithubTestClone.
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
