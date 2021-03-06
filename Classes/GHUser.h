#import <UIKit/UIKit.h>
#import "GHResource.h"


@class GravatarLoader, GHUsers, GHOrganizations, GHRepositories, GHRepository, GHFeed, GHGists, GHGist;

@interface GHUser : GHResource {
	NSString *name;
	NSString *login;
	NSString *email;
	NSString *company;
	NSString *location;
	NSURL *gravatarURL;
	NSURL *blogURL;
	NSURL *htmlURL;
	UIImage *gravatar;
	NSUInteger publicGistCount;
	NSUInteger privateGistCount;
	NSUInteger publicRepoCount;
	NSUInteger privateRepoCount;
    NSUInteger followersCount;
    NSUInteger followingCount;
    GHOrganizations *organizations;
	GHRepositories *repositories;
	GHRepositories *starredRepositories;
	GHRepositories *watchedRepositories;
	GHFeed *recentActivity;
    GHUsers *following;
    GHUsers *followers;
    GHGists *gists;
    GHGists *starredGists;
	BOOL isAuthenticated;
  @private
	GravatarLoader *gravatarLoader;
}

@property(nonatomic,retain)NSString *name;
@property(nonatomic,retain)NSString *login;
@property(nonatomic,retain)NSString *email;
@property(nonatomic,retain)NSString *company;
@property(nonatomic,retain)NSString *location;
@property(nonatomic,retain)NSURL *gravatarURL;
@property(nonatomic,retain)NSURL *blogURL;
@property(nonatomic,retain)NSURL *htmlURL;
@property(nonatomic,retain)UIImage *gravatar;
@property(nonatomic,retain)GHOrganizations *organizations;
@property(nonatomic,retain)GHRepositories *repositories;
@property(nonatomic,retain)GHRepositories *starredRepositories;
@property(nonatomic,retain)GHRepositories *watchedRepositories;
@property(nonatomic,retain)GHFeed *recentActivity;
@property(nonatomic,retain)GHUsers *following;
@property(nonatomic,retain)GHUsers *followers;
@property(nonatomic,retain)GHGists *gists;
@property(nonatomic,retain)GHGists *starredGists;
@property(nonatomic)BOOL isAuthenticated;
@property(nonatomic)NSUInteger publicGistCount;
@property(nonatomic)NSUInteger privateGistCount;
@property(nonatomic)NSUInteger publicRepoCount;
@property(nonatomic)NSUInteger privateRepoCount;
@property(nonatomic)NSUInteger followersCount;
@property(nonatomic)NSUInteger followingCount;

+ (id)userWithLogin:(NSString *)theLogin;
- (id)initWithLogin:(NSString *)theLogin;
- (void)setLogin:(NSString *)theLogin;
- (void)loadedGravatar:(UIImage *)theImage;
- (BOOL)isFollowing:(GHUser *)anUser;
- (BOOL)isStarring:(GHRepository *)aRepository;
- (BOOL)isWatching:(GHRepository *)aRepository;
- (void)followUser:(GHUser *)theUser;
- (void)unfollowUser:(GHUser *)theUser;
- (void)starRepository:(GHRepository *)theRepository;
- (void)unstarRepository:(GHRepository *)theRepository;
- (void)watchRepository:(GHRepository *)theRepository;
- (void)unwatchRepository:(GHRepository *)theRepository;
- (BOOL)isStarringGist:(GHGist *)theGist;
- (void)starGist:(GHGist *)theGist;
- (void)unstarGist:(GHGist *)theGist;

@end
